#include <bits/stdc++.h>
using namespace std;

struct hps {
        int hoof;
        int paper;
        int scissor;
}

int main() {
        int n;
        cin >> n;
        std::vector<hps> arr(n + 1);
        arr[0] = {0, 0, 0};
        char c;
        for (int i = 0; i < count; i++) {
                /* code */
                arr[i + 1] = arr[i];
                cin >> c;
                if(c == 'P') arr[i + 1].paper++;
                if(c == 'S') arr[i + 1].scissor++;
                if(c == 'H') arr[i + 1].hoof++;
        }
        int ans = 0;
        for(int i = 1; i <= n; i++){
          int ans_tmp = max(arr[i].paper, arr[i].scissor, arr[i].hoof);
        }
}
