#include<iostream>
using namespace std;
int main(){int r, c;
int  a[100][100],i,j,n,f=0,k,z;
cin>>r;
cin>>c;

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{cin>>a[i][j];}

}
cin>>n;
//optimized approach
for(i=0;i<r;)
{
for(j=r-1;j>=0;)
{if(a[i][j]==n)
    {cout<<i<<" "<<j;
    return 0;}
    else if(a[i][j]>n)
    {j--;}
    else
    {i++;}

}
}

//binary serach
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
}
return 0;
}
