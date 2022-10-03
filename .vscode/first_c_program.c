#include <stdio.h>
int _strcmp(char *s1, char *s2)
{
    while (*s1 && *s1 == *s2)  
    {
        ++s1;
        ++s2;
    }
    return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}