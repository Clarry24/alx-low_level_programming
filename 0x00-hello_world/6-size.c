#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
      char a;
      int b;
      long int c;
      long long d;
      float f;
print f("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
print("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
print("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
print("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

