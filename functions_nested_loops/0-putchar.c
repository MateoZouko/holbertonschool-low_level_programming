#include <stdio.h>
#include <unistd.h>
/**
* main - this is the main
*
* Return: 0 on successful execution
*/
int main(void)
{
char *str = "_putchar\n";

write(1, str, 9);

return (0);
}
