#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while(n)
	{
		src[n] = *dest;
		n--;
	}

return(dest);
}
