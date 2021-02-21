#include <bits/stdc++.h>
using namespace std;

string s;
bool isNice(int from, int to){
        for(int i = from; i < to; i++){
          for(int j = from; j < to; j++){
                if(32 != abs(s[i] - s[j])) return false;
          }
        }
        return true;
}
string longestNiceSubstring(string str) {
      int arr[26] = {0};
      int from = 0; int to = 1;

      while(from != str.length()){
          if(to == str.length()){
            from++;
            
          }
          else
      }
}

int main() {
  cout << longestNiceSubstring("YazaAay") << "\n";
}
