#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a;
    a.push_back(0);
    for(int i = 0; i < n; i++){
        int size = a.size();
        for(int k = size - 1; k >= 0; k--){
            a.push_back(a[k] | (1 << i));
        }
    }
}

/*
0000
0001
0011
0010
0110
0111
0101
1101
1111
1110
1100
1101
1001
1011


*/
