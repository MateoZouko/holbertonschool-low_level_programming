#include <stdio.h>
/**
 * main - this is the main
 *
 * Return: 0 on successful execution
 */
int main() {
    int i;

    for (i = 0; i <= 9; i++) {
        putchar(i + '0');
    }

    putchar('\n');

    return 0;
}

