#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    set<char> st;
    if(n > 26){
        cout << -1 << endl;
        return 0;
    }
    for(int i = 0; i < n; i++){
        st.insert(s[i]);
    }
    int ans =  (s.length() - st.size());
    cout << ans << "\n";
}