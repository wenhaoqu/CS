#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;

void copy_2d_strings(std::string first[][2],std::string second[][2],int n)
{
for(int i=0;i<n;i++)
{
for(int j=0;j<2;j++)
{
second[i][j]=first[i][j];
}
}
}

int main()
{
    string a[3][2]={"abc","def","ghi","jkl","mno","pqr"};
    string b[3][2];
    copy_2d_strings(a,b,3);
    for(int i=0;i<3;i++)
    for(int j=0;j<2;j++)
    cout << b[i][j] << endl;
    cout << a[0][0]<< endl;
    return 0;
}
