//To perform basic string operations without the use of functions
//Length of a string
//Reversing a string
//Concatenating two strings
//Converting a string to upper case

#include<stdio.h>
//#include<conio.h>
#include<string.h>

//Implementing functions for all the tasks

void length();
void reversal();
void conc();
void toUpperCase();

int main()
{
    length();
    reversal();
    conc();
    toUpperCase();
    return 0;
}

void length()
{
    char str[50];
    int len = 0;
    printf("Enter a string\n");
    gets(str);
    while(str[len] != '\0')
        len += 1;
    printf("The string is %d characters long.\n", len);
}

void reversal()
{
    char str[50];
    int i = 0, j = 0, len = 0, t = 0;
    printf("\nEnter the string\n");
    gets(str);
    while(str[len] != '\0')
        len += 1;
    j = len - 1;
    while(i<j)
    {
        t = str[j];
        str[j] = str[i];
        str[i] = t;
        i++;
        j--;
    }
    printf("\nThe reversed string is\n");
    puts(str);
}

void conc()
{
    char str1[50], str2[50], str3[100];
    int i = 0, j = 0;
    printf("\nEnter String 1\n");
    gets(str1);
    printf("\nEnter String 2\n");
    gets(str2);
    while(str1[i] != '\0')
    {
        str3[j] = str1[i];
        i += 1;
        j += 1;
    }
    i = 0;
    while(str2[i] != '\0')
    {
        str3[j] = str2[i];
        i += 1;
        j += 1;
    }
    str3[j] = '\0';
    printf("\nConcatenated String is \n");
    puts(str3);
}

void toUpperCase()
{
    char str[50], lstr[50];
    int i = 0, j = 0;
    printf("\nEnter the string\n");
    gets(str);
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            lstr[j] = str[i] - 32;
        else
            lstr[i] = str[i];
            i = i + 1;
            j = j + 1;
    }
    lstr[j] = '\0';
    printf("\nThe Converted String, in Uppercase, is\n");
    puts(lstr);
}
