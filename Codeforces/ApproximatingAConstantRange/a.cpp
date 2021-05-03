#include<cstdio>
#include<algorithm>
using namespace std;
int a[1000005];
int main()
{
int n,ans = 2,x;
scanf("%d",&n);
for(int i = 1; i <= n; i++)
{
    
    scanf("%d",&x);
    a[x] = i;
    if(a[x-1] > a[x+1])
        ans = max(ans,i-max(a[x+1],a[x-2]));
    else
        ans = max(ans,i-max(a[x+2],a[x-1]));
}
printf("%d\n",ans);
return 0;
}
