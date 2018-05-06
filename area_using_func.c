#include<stdio.h>
#include<math.h>

float cir();
float rect();
float sq();
float tri();

int main()
{
    int chk;
    float ar;
    printf("Enter : \n1 for circle.\n2 for rectangle.\n3 for square.\n4 for triangle.\n");
    scanf("\n%d", &chk);

    if(chk == 1)
    {
        ar = cir();
        printf("\nArea = %f\n", ar);
    }
    else if(chk == 2)
    {
        ar = rect();
        printf("\nArea = %f\n", ar);
    }
    else if(chk == 3)
    {
        ar = sq();
        printf("\nArea = %f\n", ar);
    }
    else if(chk == 4)
    {
        ar = tri();
        printf("\nArea = %f\n", ar);
    }
    else
        printf("\nInvalid input.");
    printf("\nEnter 1 to go again. Anything else to exit.\n");
    scanf("\n%d", &chk);
    if (chk == 1)
        main();
    else
        return 0;
}

float cir()
{
    float rad, area, pi = 3.1415926;
    printf("\nEnter the radius of the circle.\n");
    scanf("\n%f", &rad);
    area = pi*pow(rad, 2);
    return area;
}

float rect()
{
    float l, b, area;
    printf("\nEnter length and breadth of rectangle.\n");
    scanf("\n%f\n%f", &l, &b);
    area = l*b;
    return area;
}

float sq()
{
    float s, area;
    printf("\nEnter side of square.\n");
    scanf("\n%f", &s);
    area = pow(s,2);
    return area;
}

float tri()
{
    float a, b, c, s, area;
    printf("\nEnter sides of the triangle.\n");
    scanf("\n%f\n%f\n%f", &a, &b, &c);
    s = ((a+b+c)/2);
    area = sqrt((s*(s-a)*(s-b)*(s-c)));
    return area;
}
