#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    int max_so_far = 0, max_ending_here = 0;
   for (int i = 0; i < n; i++)
   {
       max_ending_here = max_ending_here + arr[i];
       if (max_ending_here < 0)
           max_ending_here = 0;
 
       /* Do not compare for all elements. Compare only   
          when  max_ending_here > 0 */
       else if (max_so_far < max_ending_here)
           max_so_far = max_ending_here;
   }
   cout << max_so_far << "\n";
    return 0;
}