#include<stdio.h>
int main()
{
    long int n;
    float f;
    scanf("%ld",&n);
    f=n*0.0000000001;
    if(f>=0.1&&f<1)
    printf("Valid");
    else
    printf("Invalid");
}