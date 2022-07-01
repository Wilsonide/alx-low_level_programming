#include <stdio.h>
/**
 * main - execution starts
 * Return: return succesful
 */
int main(void)
{
char A;
int B;
long int C;
long long int D;
float f;

printf("Size of char is: %d byte(s)\n", sizeof(A));
printf("Size of int is: %d byte(s)\n", sizeof(B));
printf("Size of long int is: %d byte(s)\n", sizeof(C));
printf("Size of long long int is: %d byte(s)\n", sizeof(D));
printf("Size of float is: %d byte(s)\n", sizeof(f));

return (0);

}
