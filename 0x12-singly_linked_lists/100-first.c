#include <stdio.h>
__attribute__ ((__constructor__))
/**
 *welcome_message - message to show before
 *the main function
 *
 */
void welcome_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
