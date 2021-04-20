
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
 
using namespace std;
 
#define REP(i,n) for((i)=0;(i)<(int)(n);(i)++)
#define foreach(c,itr) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
 
typedef long long ll;
 
ll X,Y;
ll dx[10010],dy[10010];
 
ll func(ll x, ll y, int id){
    ll high = (1ll<<32), low = 0, mid;
    
    while(high-low > 1){
        mid = (high + low) / 2;
        ll x2 = x + dx[id] * mid;
        ll y2 = y + dy[id] * mid;
        if(x2 >= 1 && x2 <= X && y2 >= 1 && y2 <= Y) low = mid; else high = mid;
    }
    
    return low;
}
 
int main(void){
    int N,i;
    ll x,y;
    
    cin >> X >> Y >> x >> y;
    cin >> N;
    REP(i,N) cin >> dx[i] >> dy[i];
    
    ll ans = 0;
    REP(i,N){
        ll tmp = func(x,y,i);
        ans += tmp;
        x += dx[i] * tmp;
        y += dy[i] * tmp;
    }
    
    cout << ans << endl;
    
    return 0;
}