#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[26];
    memset(a, 0, sizeof(a));
    string s; cin >> s;

    for(int i = 0; i < s.length(); i++){
        a[s[i] - 'A']++;
    }

    bool flag = false;
    string u = "", v = "", inb = "";
    for(int i = 0; i < 26; i++){
        if(a[i] & 1){
            if(flag){
                printf("NO SOLUTION\n");
                return 0;
            }
            else{
                flag = 1;
                inb = string(a[i], 'A' + i);
            }
        }
        else{
            u = u + string(a[i] / 2, 'A' + i);
            v = string(a[i] / 2, 'A' + i) + v;
        }
    }

    cout << u << inb << v << "\n";

    
}
