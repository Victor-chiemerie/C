#include <stdio.h>
//#include "main.h"
#include <string.h>
/**
 * rot13 - converts some alphabets in a string to the opposite character when the alphabets are divided into 2
 * @s: the string to be converted
 * 
 * Return: the converted string
 */
char *rot13(char * s)
{
    int n = strlen(s);
    int i, j;
    char k;
    for ( i = 0; i < n; i++)
    {
        while (((*(s + i) > 64) & (*(s + i) < 91)) || ((*(s + i) > 96) & (*(s + i) < 123)))
        {
            if(((*(s + i) > 64) & (*(s + i) <= 77)) || ((*(s + i) > 96) & (*(s + i) <= 109)))
            {
                *(s + i) = *(s + i) + 13;
            }
            else
            {
                *(s + i) = *(s + i) - 13;
            }
            break;
        }
    }
    return s;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    return (0);
}