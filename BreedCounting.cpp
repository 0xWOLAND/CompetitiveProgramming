#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
        int n, q;
        cin >> n >> q;
        int arr[n];
        for(int i = 0; i < n; i++) {
                cin >> arr[i];
        }
        vector<int> a(n, 0);
        vector<int> b(n, 0);
        vector<int> c(n, 0);
        if(arr[0] == 1) a[0] = 1;
        else if(arr[0] == 2) b[0] = 1;
        else if(arr[0] == 3) c[0] = 1;

        for(int i = 1; i < n; i++) {
                a[i] += a[i - 1];
                b[i] += b[i - 1];
                c[i] += c[i - 1];
                if(arr[i] == 1) a[i]++;
                if(arr[i] == 2) b[i]++;
                if(arr[i] == 3) c[i]++;
        }
        cout << "\n––––––––––––––––\n";
        for(int i = 0; i < n; i++) {
                cout << a[i] << " " << b[i] << " " << c[i] << "\n";
        }

        cout << "\n––––––––––––––––\n";

        for(int i = 0; i < q; i++) {
                int u, v;
                cin >> u >> v;
                cout << a[v - 1] - a[u - 1] << " " << b[v - 1] - b[u - 1] << " " << c[v - 1] - c[u - 1] << "\n";
        }
        return 0;
}
