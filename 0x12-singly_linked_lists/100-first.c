#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
{
	printf("This is amazing! yet it feel so good to be true,\n");
	printf("My dreams are becoming a reality!\n");
}

