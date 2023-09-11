#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers.
 * 
 * Return: Always 0 (Success)
 * 
 */
int main(void)
{
    int num = 0;
    
    while (num <= 9)
    {
        putchar('0' + num);
        putchar(',');
        putchar(' ');
        num++;
    }

    putchar('\n');

    return(0);
}
