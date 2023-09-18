#include "main.h"
/**
 * main - check the code
 * no arguments
 * Return: 0 on success
 * go thrpough it.
 */
int main(void)
{
	int len, len2;
	char *str, c;

	len = _printf("Let's print a simple sentence");
	len2 = printf("Let's print a simple sentence");
	(void) printf("\nThe std printf returns %d while yours returns %d see the difference",len2,len);
	c = 'u';
	len = _printf("Now let's add a char %c variable", c);
	len2 = printf("Now let's add a char %c variable", c);
	(void) printf("\nThe std printf returns %d while yours returns %d see the difference",len2,len);
	c = NULL;
	len = _printf("Now let's see what happens if the char %c is NULL", c);
	len2 = printf("Now let's see what happens if the char %c is NULL", c);
	(void) printf("\nThe std printf returns %d while yours returns %d see the difference",len2,len);
	c = '%';
	len = _printf("The char %c is now a percent", c);
	len2 = printf("The char %c is now a percent", c);
	(void) printf("\nThe std printf returns %d while yours returns %d see the difference",len2,len);
	len = _printf("What happens when it's a percent %% follow");
	len2 = printf("What happens when it's a percent %% follow");
	(void) printf("\nThe std printf returns %d while yours returns %d see the difference",len2,len);
	str = "A simple string";
	len = _printf("Let's conjoin a string %s and see", str);
	len2 = printf("let's conjoin a string %s and see", str);
	(void) printf("\nThe std printf returns %d while yours returns %d see the difference",len2,len);
	str = NULL;
	len = _printf("Now let's see what happens when the string %s is NULL", str);
	len2 = printf("Now let's see what happens when the string %s is NULL", str);
	(void) printf("\nThe std printf returns %d while yours returns %d see the difference",len2,len);
	len = _printf("let's see the return when a percent % is alone in the middle");
	len2 = printf("let's see the return when a percent % is alone in the middle");
	(void) printf("\nThe std printf returns %d while yours returns %d see the difference",len2,len);
	len = _printf("Now a percent ends the string %");
	len2 = printf("Now a percent ends the string %");
	(void) printf("\nThe std printf returns %d while yours returns %d see the difference",len2,len);
	len = _printf(NULL);
	len2 = printf(NULL):
	(void) printf("\nThe std printf returns %d while yours returns %d see the difference",len2,len);
	return (0);
}
