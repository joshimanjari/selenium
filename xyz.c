#include<stdio.h>
int main()
{
    int n,c,sum=0,r;
    printf(" enter the number/n");
    scanf("%d",&n)
    c=n;
    while(n>0)
    {
        r=n%10;
        sum=r+(sum*10);
        n=n/10;
    }
    if(sum==c)
    printf("palindrome")
     else
     printf("not palindrome")
    return0
}