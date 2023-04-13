#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    for(int i = 10; i<=99; i++)
    {
        if(number %i == 0)
        {
            printf("Yes\n");
            break;
        }
        else
        {
            printf("No\n");
            break;
        }
    }
    return 0;
}