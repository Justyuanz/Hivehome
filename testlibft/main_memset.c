// #include <string.h>
#include <stdio.h>

int	main(void)
{
	char a[50];
	int	c;
	size_t	n;

	c = '0';
	n =  4;
	a[4] = '\0';
	//printf("%.3s", (char *)memset(a, c, n));
	printf("%s", (char *)memset(a, c, n));
}
/* %p to print void pointer   %c is a print a character%.3s to print a specific amount of characters in the string
 printf expects the string to be null terminated, so need to add  the \0 at the end of  the string
 
 Type void is not assignable
 void pointers can store memory addresses of any type of data values, like malloc returns a void pointer
 vid *malloc(size_t size)  we cannot dereference void pointers and pointer arithmetic does not always work with void pointer
 *((char*)s) is  typecasting void pointer s to char pointer and then dereference it to get value
 
 */