#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(int argc, char const *argv[]) {
        ifstream fin("div7.in");
        ofstream fout("div7.out");
        int n;
        fin >> n;
        int arr[n];
        ull prefix[n];
        for(int i = 0; i < n; i++) {
                fin >> arr[i];
        }
        partial_sum(arr, arr + n, prefix);
        for(int i = n - 1; i > 0; i--) {
                for(int j = 0; j < i; j++) {
                        if((prefix[i] - prefix[j]) % 7 == 0) {
                                // fout << i << " " << prefix[i] << "\n";
                                // fout << j << " " << prefix[j] << "\n";
                                fout << i - j << "\n";
                                return 0;
                        }
                }
        }

        return 0;
}
