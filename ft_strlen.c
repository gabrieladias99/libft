#include <stddef.h>

size_t ft_strlen(const char *s)
{
	size_t size;

	size = 0;
	while(*s++)
		size++;
	return (size);
}

#include <stdio.h>

int main(void)
{
	printf("%zu",ft_strlen("Gabriela"));
}