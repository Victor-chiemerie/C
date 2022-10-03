#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * 
 * Return: always 0
 */
int main(int argc, char* argv[])
{
        int i, result, j;
        if (argc == 2)
        {
            i = argc / 25;
            j = argc % 25;
            result = i + j;
            printf("%d\n", result);
            return (0);
        }
        else 
        printf("Error\n");
        return (1);
}
