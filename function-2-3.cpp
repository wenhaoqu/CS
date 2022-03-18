int sum_if_a_palindrome(int integers[],int length)
{
if(length<1)return -1;
for(int i=0;i<length/2;i++)
{
if(integers[i]!=integers[length-1-i])
return -2;
}
return 1;
}

bool is_a_palindrome(int integers[],int length)
{
if(length<1)return -1;
else return 1;
}

int sum_elements(int integers[],int length)
{
int sum_if_a_palindrome(int integers[],int length);
if(sum_if_a_palindrome(integers,length)>0)
{
int ans=0;
for(int i=0;i<length;i++)
ans+=integers[i];
return ans;
}
else
{
return sum_if_a_palindrome(integers,length);
}
}
