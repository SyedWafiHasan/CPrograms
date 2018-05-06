#include<stdio.h>
int main()
{
    int i = 0;
    for(i = 0; i<=10;i++)
    {
        if(i == 5)
            continue;
        printf("\n%d", i);
    }
    return 0;
}
