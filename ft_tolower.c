int ft_tolower(int c)
{
	if (!(c >= 65 && c <= 90))
		return (c);
	return (c + 32);
}

#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_tolower('A'));
	printf("%d\n", ft_tolower('1'));
}