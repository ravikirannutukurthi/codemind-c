#include<stdio.h>
int main()
{
    int n,r,f,s,s1,rev=0,rev1=0;
    scanf("%d",&n);
    s=n*n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    s1=rev*rev;
    while(s1!=0)
    {
        f=s1%10;
        rev1=rev1*10+f;
        s1=s1/10;
    }
    if(s==rev1)
    {
        printf("True");
     }
     else{
    printf("False");
     }
     return 0;
}