#include<stdio.h>
#include<math.h>
float f(float x)
{
    return(1/(1+pow(x,2)));
}
void main()
{
    int i,n;
    float x0,xn,h,y[20],s1=0,s2=0,ans,x[20];
    printf("\n Enter values of x0,xn,h: ");
    scanf("%f%f%f",&x0,&xn,&h);
    n=(xn-x0)/h;
    if(n%2==1)
    {
        n=n+1;
    }
    h=(xn-x0)/n;
    for(i=0;i<=n;i++)
    {
        x[i]=x0+i*h;
        y[i]=f(x[i]);

    }

    for(i=1; i<n; i++)
    {
        if(i%2==1)
        {
            s1=s1+y[i];
        }
        else
        {
            s2=s2+y[i];
        }

    }
    ans=h/3*(y[0]+y[n]+4*s1+2*s2);
    printf("\n Final integration is %f",ans);

}
