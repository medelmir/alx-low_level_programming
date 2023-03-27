#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    srand(time(NULL));

    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}|;':\",./<>?\\ ";
    const int charset_size = 93;

    int sum = 0;
    int i;
    int last_char;
    for (i = 0; i < 100; i++)
    {
        int index = rand() % charset_size;
        sum += charset[index];
        putchar(charset[index]);
    }

    last_char = (2772 - sum) % charset_size;
    putchar(charset[last_char]);

    return 0;
}
