#include <stdio.h>
/**
 *main- Print the sizes
 *
 *Return: Always 0
 */
int main(void)
{
printf("char size;%d byte(s)\n", sizeof(char));
printf("int size;%d byte(s)\n", sizeof(int));
printf("long int size;%d byte(s)\n", sizeof(long int));
printf("long long int size;%d byte(s)\n", sizeof(long long int));
printf("float size;%d byte(s)\n", sizeof(float));
return (0);
}
