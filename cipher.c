#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, char* argv[])
{
    int n;
    if(argc!=2)
    {
        n=get_int("Usage: ");

    }
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: \n");

        }
    }

    n=atoi(argv[1]);

    n=n%26;


    string s=get_string("Plaintext: ");


    int len=strlen(s);
    printf("ciphertext: ");

    for(int i=0;i<len;i++)
    {
        int c=(s[i]+n);

        if(c<=90 && (s[i]<=90 && s[i]>=65))
        {
        printf("%c",c);
        }
        else if(c<=122 && (s[i]<=122 && s[i]>=97))
        {
            printf("%c",c);
        }
        else if(c>90 && (s[i]>=65 && s[i]<=90))
        {
            int extra=(c-90)+64;
            printf("%c",extra);
        }
        else if(c>122 && (s[i]>=97 && s[i]<=122))
        {
            int extra=(c-122)+96;

            printf("%c",extra);
        }
        else
        {
            printf("%c",s[i]);
        }


    }
    printf("\n");
}
