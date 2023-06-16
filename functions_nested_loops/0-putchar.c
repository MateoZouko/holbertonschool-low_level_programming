#include <stdio.h>
#include <unistd.h>
/**
* main - this is the main
*
* Return: 0 on successful execution
*/
int _putchar(char a)
{
return (write(1, &a, 1));
}
