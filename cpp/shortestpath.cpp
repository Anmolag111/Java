#include<iostream>
using namespace std;
int main()
{

char dir,N,E,S,W;
int x=0,y=0;

dir=cin.get();
while(dir!='\n')
{if(dir=='N')
    x++;
else if(dir=='S')
    x--;
else if(dir=='E')
    y++;
else
    y--;

    dir=cin.get();
}
    cout<<x<<endl;
    cout<<y<<endl;
    if(x>0)
       {
           while(x>0)
        {
            cout<<"N";
            x--;
        }
       }
       if(y>0)
        {
           while(y>0)
        {
            cout<<"E";
            y--;
        }
       }
if(x<0)
       {
           while(x<0)
        {
            cout<<"S";
            x++;
        }
       }
       if(y<0)
{
           while(y<0)
        {
            cout<<"W";
            y++;
        }
       }


return 0;
}





