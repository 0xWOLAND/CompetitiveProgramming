#include <bits/stdc++.h>
using namespace std;

int main() {
    int b[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> b[i][j];
        }
    }

    for(int i = 1; i < 1e6; i++){
        b[1][1] = i;
        int tot = b[1][0] + b[1][1] + b[1][2];
        b[0][0] = tot - b[0][1] - b[0][2];
        b[2][2] = tot - b[2][0] - b[2][1];
        bool ans = true;

        for(int j = 0; j < 3; j++){
            if(b[j][0] + b[j][1] + b[j][2] != tot) ans = false;
            else if(b[0][j] + b[1][j] + b[2][j] != tot) ans = false;
        }

        if(b[0][0] + b[1][1] + b[2][2] != tot) ans = false;
        else if(b[0][2] + b[1][1] + b[2][0] != tot) ans = false;

        if(ans){
            for(int u = 0; u < 3; u++){
                for(int v = 0; v < 3; v++){
                    cout << b[u][v] << " ";
                }
                cout << "\n";
            }
            return 0;
        }
    }
    // 4  + 5 + x = x + 3 + 6
}