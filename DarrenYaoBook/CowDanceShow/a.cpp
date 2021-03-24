#include <bits/stdc++.h>
using namespace std;

int n, t_max;
int t[(int) (1e5)];

bool ok(int size){
    priority_queue<int,  vector<int>, greater<int> > p;
    int last = 0;
    for(int i = 0; i < n; i++){
        if(p.size() == size){
            last = p.top();
            p.pop();
        }
        if(last + t[i] > t_max) return false;
        p.push(last + t[i]);
    }
    return true;

}

int main(int argc, char const *argv[])
{

    ifstream fin("cowdance.in");
    ofstream fout("cowdance.out");
    fin >> n >> t_max;
    for(int i = 0; i < n; i++) fin >> t[i];
    int lo = 1, hi = n;
    while(lo < hi){
        int mid = (lo + hi) / 2;
        if(ok(mid)){
            hi = mid;
        }
        else{
            lo = mid + 1;
        }
    }
    fout << lo << "\n";
    return 0;
}