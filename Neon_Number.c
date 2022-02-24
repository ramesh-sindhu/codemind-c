#include <stdio.h>
int main()
{
    int i,j,k,l,s=0;
    scanf("%d",&i);
    j=i*i;
    k=j;
    while(j>0)
    {
        l=j%10;
        s=s+l;
        j=j/10;
        
        
    }if(s==i)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}