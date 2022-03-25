#include<iostream>
#include<string>
using namespace std;

void cpyda(double *old_array,double *new_array,int length)
{
for(int i=0;i<length;i++)
{
*(new_array+i)=*(old_array+i);
}
}


int main()
{
    double a[5]={1.1,2.2,3.3,4.4,5.5},b[5];
    cpyda(a,b,5);
    for(int i=0;i<5;i++)
    cout << b[i] << endl;
    return 0;
