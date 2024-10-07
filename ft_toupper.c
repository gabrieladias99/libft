int ft_toupper(int c)
{
	if (!(c >= 97 && c <= 122))
		return (c);
	return (c - 32);
}

#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_toupper('a'));
	printf("%d\n", ft_toupper('1'));
}