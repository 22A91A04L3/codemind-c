#include<stdio.h>
int main()
{
    int n,u,l,p,i;
    scanf("%d%d%d",&n,&u,&l);
    for(i=u;i<=l;i++)
    {
        p=n*i;
        printf("%d x %d = %d
",n,i,p);
    }
}