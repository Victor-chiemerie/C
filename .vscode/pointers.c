#include <stdio.h>

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

char* timeConversion(char* s) 
{
    if(s[8] == 'P')
    {
        int i, j, count = 0;
        for ( i = 1; i >= 0; i--)
        {
            int h = (char) s[i];
            h = h - 48; // h = 7;
            for ( j = h; j < 9; j++)
            {
                *(s + i) = s[i] + 1;
            }
        }
    }
}
void main(void)
{
    char* word =     "07:05:45PM"; // 09...10
    char* result; // "19:05:45"
    result = timeConversion(word);
    printf(result);
}
