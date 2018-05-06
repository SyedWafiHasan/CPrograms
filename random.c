//Created by SWH
#include <stdio.h>
int main()
{
    int i,t,a,b,rev=0,revb=0,c,revc=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%d%d",&a,&b);
    while(a!=0)
    {
        rev=rev*10;
        rev=rev+a%10;
        a=a/10;
    }
        while(b!=0)
        {
            revb=revb*10;
            revb=revb+b%10;
            b=b/10;
        }
        c=rev+revb;
        while(c!=0)
        {
            revc=revc*10;
            revc=revc+c%10;
            c=c/10;
        }
        printf("%d\n",revc);
        rev = 0, revb = 0, revc = 0;
    }
    return 0;
}