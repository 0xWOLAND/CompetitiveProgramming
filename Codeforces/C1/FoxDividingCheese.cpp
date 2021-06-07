#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int dif[3] = {2, 3, 5};
    int A[3], B[3];
    memset(A, 0, sizeof(A));
    memset(B, 0, sizeof(B));
    for (int i = 0; i < 3; i++)
    {
        while(a % dif[i] == 0){
            a /= dif[i];
            A[i]++;
        }
        while(b % dif[i] == 0){
            b /= dif[i];
            B[i]++;
        }
    }
    if(a != b){
        cout << -1;
        return 0;
    }
    int ans = 0;

    for (int i = 0; i < 3; i++){
        ans += abs(A[i] - B[i]);
    }
    cout << ans << "\n";
}