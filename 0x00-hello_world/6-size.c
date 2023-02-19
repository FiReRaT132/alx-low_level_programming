#include <stdio.h>
/**
 *main- Print the sizes
 *
 *Return: Always 0
 */
int main(void)
{
printf("char size;%lu bytes\n", sizeof(char));
printf("int size;%lu bytes\n", sizeof(int));
printf("long int size;%lu bytes\n", sizeof(long int));
printf("long long int size;%lu bytes\n", sizeof(long long int));
printf("float size;%lu bytes\n", sizeof(float));
return (0);
}
