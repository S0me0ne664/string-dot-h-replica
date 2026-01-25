#include <stddef.h>

size_t my_strlen(const char *str) {
    size_t length = 0;
    while (*str != '\0') {
        str++;
        length++;
    }
    return length;
}

char *my_strcpy(char *dst, const char *src)
{
	size_t i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return dst;
}
