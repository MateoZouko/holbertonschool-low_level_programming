#include<stdlib.h>
#include<time.h>
/**
* main - this is the main
*
* Return: 0 on successful execution
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		return (is positive);
	}if else (n = 0)
	{
		return (is zero);
	} else
	{
		return (is negative);
	}
	return (0);
}

