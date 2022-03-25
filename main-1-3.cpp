#include<iostream>
#include<string>
using namespace std;

void copia(int old_array[],int new_array[],int length)
{
for(int i=0;i<length;i++)
{
*(new_array+i)=*(old_array+i);
}
}


int main()
{
    int a[5]={1,2,3,4,5},b[5];
    copia(a,b,5);
    for(int i=0;i<5;i++)
    cout << b[i] << endl;
    return 0;
}
