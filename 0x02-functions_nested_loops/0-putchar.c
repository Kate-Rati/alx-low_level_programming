#include<unistd.h>
#include "main.h"

/**main function
 * returns 0
 */
int _putchar(char c){
	
	return (write(1,&c,1));
}
