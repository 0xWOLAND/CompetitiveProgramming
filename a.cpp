#include <bits/stdc++.h>
using namespace std;

bool test(int a, int b){
    for(int i = 0; i < 1000000; i++){
        if(a < b){
            a *=2;
            b++;
        }
        else if(a > b){
            b *= 2; 
            a++;
        }
        else{
            return true;
        }
    }
    return false;
}

int main() {
    for(int i = 0; i < 1000; i++){
        for(int b = 0; b < 1000; b++){
            if(test(i, b)){
                cout << i << " " << b << "\n";
            }
        }
    }

}
