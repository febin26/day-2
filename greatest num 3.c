#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("the a is greater");
    }
    else if(b>a&&b>c)
    {
        printf("The B is greater");
    }
    else
    {
        printf("c is greater");
    }
}
