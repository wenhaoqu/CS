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
