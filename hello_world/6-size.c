#include<stdio.h>
int main(void)
{
char chatType;
int intType;
longint longintType;
longlongint longlongintType;
float floatType;
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of longint: %zu bytes\n", sizeof(longintType));
printf("Size of longlongint: %zu bytes\n", sizeof(longlongintType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
return (0);
}
