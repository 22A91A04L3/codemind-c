#include<stdio.h>
int main()
{
    int n,p,b,m,com;
    scanf("%d%d%d%d%d",&p,&n,&b,&m,&com);
    n=(p+n+b+m+com)/5;
    if(n>=90)
    {
        printf("Grade A");
    }
    else if(n>=80)
    {
        printf("Grade B");
    }
    else if(n>=70)
    {
        printf("Grade C");
    }
    else if(n>=60)
    {
        printf("Grade D");
    }
    else if(n>=40)
    {
        printf("Grade E");
    }
    else if(n<40)
    {
        printf("Grade F");
    }
    else
    {
        printf("Fail");
    }
}