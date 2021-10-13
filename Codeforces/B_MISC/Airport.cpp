#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    priority_queue<int> a;
    int high = 0, low = 0;
    vector<int> b;
    for(int i = 0; i < m; i++){
        int t; cin >> t;
        a.push(t);
        b.push_back(t);
    }

    int t = n;

    while(t-- && a.size() > 0){
        int k = a.top();
        high += k;
        a.pop();
        if(k > 1){
            a.push(k - 1);
        }
    }

    sort(b.begin(), b.end());
    t = n;
    for(int i = 0; i < m && t > 0; i++){
        while(t > 0 && b[i] > 0){
            low += b[i];
            b[i]--;
            t--;
        }
    }
    printf("%d %d\n", high, low);
}