#include <stdio.h>
/**
<<<<<<< HEAD
 * main - Entry point
 * Return: Always 0 (success)
=======
 * main - entry
 * Return: 0 (success)
>>>>>>> 318e93fdc3d7ec74f7c016886f35ef12632c7bce
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;
<<<<<<< HEAD
print f("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
print("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
print("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
print("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
print("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
=======
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
>>>>>>> 318e93fdc3d7ec74f7c016886f35ef12632c7bce
return (0);
}

