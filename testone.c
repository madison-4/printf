#include "main.h"
#include<stdio.h>
/**
 * main - check the code
 * no arguments
 * Return: 0 on success
 * go thrpough it.
 */
int main(void)
{
	int len, len2;
	char *str __attribute__((unused)), c __attribute__((unused));

/*	len = printf("Let's print a simple sentence");
	len2 = _printf("Let's print a simple sentence");
	printf("\nThe std printf returns %d while yours returns %d see the difference", len, len2);
	c = 'u';
	len = printf("Now let's add a char %c variable", c);
	len2 = _printf("Now let's add a char %c variable", c);
	printf("\nThe std printf returns %d while yours returns %d see the difference",len, len2);
*/	c = '\0';
	len = printf("Now let's see what happens if the char %c is NULL", c);
	len2 = _printf("Now let's see what happens if the char %c is NULL", c);
	printf("\nThe std printf returns %d while yours returns %d see the difference",len, len2);
/*	c = '%';
	len = printf("The char %c is now a percent", c);
	len2 = _printf("The char %c is now a percent", c);
	printf("\nThe std printf returns %d while yours returns %d see the difference",len, len2);
	len = printf("What happens when it's a percent %% follow");
	len2 = _printf("What happens when it's a percent %% follow");
	printf("\nThe std printf returns %d while yours returns %d see the difference",len ,len2);
	str = "A simple string";
	len = _printf("Let's conjoin a string %s and see", str);
	len2 = printf("let's conjoin a string %s and see", str);
	printf("\nThe std printf returns %d while yours returns %d see the difference",len2,len);
	str = NULL;
	len = _printf("Now let's see what happens when the string %s is NULL", str);
	len2 = printf("Now let's see what happens when the string %s is NULL", str);
	printf("\nThe std printf returns %d while yours returns %d see the difference",len2,len);
	len = _printf("let's see the return when a percent % is alone in the middle");
	len2 = printf("let's see the return when a percent % is alone in the middle");
	printf("\nThe std printf returns %d while yours returns %d see the difference",len2,len);
	len = _printf("Now a percent ends the string %");
	len2 = printf("Now a percent ends the string %");
	printf("\nThe std printf returns %d while yours returns %d see the difference",len2,len);
	len = _printf(NULL);
	len2 = printf(NULL);
	printf("\nThe std printf returns %d while yours returns %d see the difference",len2,len);
*/	return (0);
}
