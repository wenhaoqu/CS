#include<iostream>
#include<string>
using namespace std;

void print_sevens(int *nums,int length)
{
for(int i=0;i<length;i++)
{
if((*(nums+i))%7==0)
cout << (*(nums+i)) << endl;
}
}


int main()
{
    int a[5]={1,2,7,14,5};
    print_sevens(a,5);
    return 0;
}
