#include <bits/stdc++.h>
using namespace std;

bool recurse(int a, int b, int c, int d, int e){
    printf("%d %d %d %d %d\n", a, b, c, d, e);
    int n = 0;
    if(a < 0 || b < 0 || c < 0 || d < 0 || e < 0)
        return false;
    if (a <= 0)
        n++;
    if(b <= 0) n++;
    if(c <= 0) n++;
    if(d <= 0) n++;
    if(e <= 0) n++;
    if (n >= 2)
    {
        if(a + b + c + d + e == 1){
            cout << "YES\n";
            return 1;
        }
        else{
            return 0;
        }
    }
    return (recurse(a + 1, b - 1, c - 1, d - 1, e - 1) ||
            recurse(a - 1, b + 1, c - 1, d - 1, e - 1) ||
            recurse(a - 1, b - 1, c + 1, d - 1, e - 1) ||
            recurse(a - 1, b - 1, c - 1, d + 1, e - 1) ||
            recurse(a - 1, b - 1, c - 1, d - 1, e + 1));
}

int main() {
    int a = 7, b = 7, c = 9, d = 5, e = 7;
    recurse(a, b, c, d, e);
}