#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>
#include <memory.h>
#include <string>
#include <set>
#include <map>
#include <queue>
using namespace std;
#define forn(i,n) for(int i=0;i<(n);++i)
#define forv(i,v) forn(i,(int)(v).size())
#define iinf 1000000000
#define linf 1000000000000000000LL
#define dinf 1e200
#define all(v) (v).begin(),(v).end()
#define pb push_back
#define mp make_pair
#define lng long long
#define eps 1e-11
#define EQ(a,b) (fabs((a)-(b))<eps)
#define SQ(a) ((a)*(a))
#define PI 3.14159265359
#define index asdindex
#define FI first
#define SE second
#define prev asdprev
#define ends asdends
#define PII pair<int,int> 
#define X first
#define Y second
#define mset(a,b) memset(a,b,sizeof(a))
 
 
 
 
lng v1[1010], v2[1010];
 
pair<lng, int> heights[1010];
 
lng grow(lng v1, lng v2,  lng t1, lng t2, lng k){
    lng res = t1*v1;
    res=res/100*(100-k);
    res+=v2*t2;
    return res;
}
 
int main(){
#ifdef __ASD__
    freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#endif
    //ios::sync_with_stdio(false);
    int n;
    lng t1, t2, k;
    cin >> n >> t1 >> t2 >> k;
 
    forn(i,n){
        cin >> v1[i] >> v2[i];
        v1[i]*=100;
        v2[i]*=100;
        heights[i] = mp(-max(grow(v1[i], v2[i], t1, t2, k), grow(v2[i], v1[i], t1, t2, k)), i);
    }
    sort(heights, heights+n);
    for(int i=0;i<n;++i){
        heights[i].first*=-1;
        cout << heights[i].second+1;
        cout <<" ";
        cout << heights[i].first/100;
        cout <<".";
        printf("%02d\n", (int)(heights[i].first%100));
    }
    return 0;
}