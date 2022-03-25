#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int maximum_sum(int *nums,int length)
{
if(length<1)return 0;
int tmp=max(0,*nums),ans=max(0,*nums);
for(int i=1;i<length;i++)
{
tmp=max(0,tmp+(*(nums+i)));
ans=max(ans,tmp);
}
return ans;
}

int main()
{
    int a[10]={31,-41,59,26,-53,58,97,-93,-23,84};
    cout << maximum_sum(a,10)<<endl;
    return 0;
}
