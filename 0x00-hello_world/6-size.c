#include <stdio.h>
/**
 * main - execution starts
 * Return: return succesful
 */
int main(void)
{

printf("size of char is : %d byte\n", sizeof(char));
printf("size of signed char is : %d byte\n", sizeof(signed char));
printf("size of unsigned char is : %d byte\n", sizeof(unsigned char));

printf("size of int is : %d byte\n", sizeof(int));
printf("size of signed int is : %d byte\n", sizeof(signed int));
printf("size of unsigned int is : %d byte\n", sizeof(unsigned int));

printf("size of short int is : %d byte\n", sizeof(short int));
printf("size of signed short int is : %d byte\n", sizeof(signed short int));
printf("size of unsigned short int is: %d byte\n", sizeof(unsigned short int));

printf("size of long int is : %d byte\n", sizeof(long int));
printf("size of signed long int is : %d byte\n", sizeof(signed long int));
printf("size of unsigned long int is : %d byte\n", sizeof(unsigned long int));

printf("size of float is : %d byte\n", sizeof(float));
printf("size of double is : %d byte\n", sizeof(double));
printf("size of long double is : %d byte\n", sizeof(long double));

return (0);

}
