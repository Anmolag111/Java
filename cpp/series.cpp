#include<iostream>
using namespace std;
int main()
{
    int n1,n2,k,n,i=1,c=0;
    cin>>n1;
    cin>>n2;
    if((n1>0&&n1<100)&&(n2>0&&n2<100))
{
    k=5;
while(i<=n1)
{c=0;
  {if(k%n2!=0)
      {
        c=1;
       }
       if(c==1)
     {
    i++;
    cout<<k<<endl;
     }
  }
   k=k+3;

}
}
    return 0;
}
