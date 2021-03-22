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
	int n, m;
	cin >> n >> m;
	vector<ull> room(n), pfx(n + 1);
	for(int i = 0; i < n; i++){
		cin >> room[i];
	}

	for(int i = 0; i < n; i++){
		pfx[i + 1] = pfx[i] + room[i];
	}

	for(int i = 0; i < m; i++){
		ull u; cin >> u;
		auto itr =  (lower_bound(all(pfx), u));
		auto cur = itr;
		itr--;
		ull j = *itr;
		ull dist = distance(pfx.begin(), cur);
		cout << dist << " " << u - j << "\n";
	}
	


}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}