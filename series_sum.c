#include<stdio.h>
#include<math.h>
int main()
{
    int i, c = 0;
    for(i = 12345; i>0; i = i/10)
    {
        c = c+i;
    }
    printf("The sum = %d", c);
    return 0;
}
