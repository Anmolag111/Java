#include <stdio.h>
#include <stdlib.h>

int facti(int n)
{
    int p,factorial=1;
    for(p=1;p<=n;p++){
        factorial=factorial*p;
    }
    return factorial;

}
int pascal(int a,int b)
{
    int triangle=1;
    triangle=(facti(a))/(facti(a-b)*facti(b));
    return triangle;

}
int main()
{
    int i,j,k,n;
    printf("Pascal Triangle is\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(k=1;k<(n-i);k++){
            printf(" ");

        }
        for(j=0;j<=i;j++){
            printf("%d",pascal(i,j));
        }

    printf("\n");}
}
