#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d",&d);
    int e = a+b*c;
    int f = a+b-c;
    int g = a-b+c;
    int h = a-b*c;
    int i = a*b+c;
    int j = a*b-c;
    if(e==d)
    {
        printf("Yes\n");
    }
    else if(f==d)
    {
        printf("Yes\n");
    }
    else if(g==d)
    {
        printf("Yes\n");
    }
     else if(h==d)
    {
        printf("Yes\n");
    }
     else if(i==d)
    {
        printf("Yes\n");
    }
     else if(j==d)
    {
        printf("Yes\n");
    }
    else 
    {
        printf("No\n");
    }

    return 0;
}