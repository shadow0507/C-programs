#include<stdio.h>
void main()
{
    int i,n,m=0,flag=0;
    printf("Enter the number");
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
           printf("This is a  not prime number");
           flag=1;
           break;
        }
        
    }
    if(flag==0)
    {
        printf("this is a prime number");
    }
}