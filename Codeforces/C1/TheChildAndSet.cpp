#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum, limit;
    cin >> sum >> limit;
    vector<pair<int, int> > nums;
    vector<int> ans;
    for(int i = 1; i <= limit; i++){
        nums.push_back({i & -i, i});
    }

    sort(nums.begin(), nums.end());

    for(int i = limit - 1; i >= 0; i--){
        if(sum >= nums[i].first){
            sum -= nums[i].first;
            ans.push_back(nums[i].second);
        }
    }
    if(sum){
        cout << -1;
    }
    else{
        cout << ans.size() << "\n";
        for(auto n: ans){
            cout << n << " ";
        }
    }
}