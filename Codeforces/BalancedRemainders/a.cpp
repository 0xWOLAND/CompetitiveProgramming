#include "bits/stdc++.h"
using namespace std;
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll	
typedef vector<int> vi;
typedef vector<bool> vb;
typedef long long ll;
typedef vector<long long> vll;
typedef unsigned long long ull;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii;
typedef pair<pair<int, int>, int> ppi;
typedef vector<pair<int, int>> vii;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef map<int, bool> mib;
typedef map<int, string> mis;
typedef map<string, int> msi;
typedef map<int, char> mic;
typedef set<int> si;
typedef set<char> sc;
typedef set<string> ss;
typedef stack<int> sti;
typedef stack<string> sts;
typedef stack<char> stc;

template<typename T1,typename T2>istream& operator>>(istream& in,pair<T1,T2> &a){in>>a.fr>>a.sc;return in;}
template<typename T1,typename T2>ostream& operator<<(ostream& out,pair<T1,T2> a){out<<a.fr<<" "<<a.sc;return out;}
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;


void solve(){
	int n; cin >> n;
	int rem[3] = {0,0,0};
	for(int i = 0; i < n; i++){
		int u; cin >> u;
		rem[u % 3]++;
	}
	int ans = 0;
	while(1){
		for(int i = 0; i < 3; i++){
			if(rem[i] > n / 3){
				int diff = rem[i] - n / 3;
				rem[(i + 1) % 3] += diff;
				ans += diff;
				rem[i] -= diff;
			}
		}
		bool stop = 1;
		for(int i = 0; i < 3; i++){
			if(rem[i] != n / 3) stop = 0;
		}
		if(stop) break;
	}
	
	
	cout << ans << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
