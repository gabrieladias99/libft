int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= '0' && c <= '9'))
		return 1;
	return 0;
}

#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('9'));
	printf("%d\n", ft_isalnum('~'));
	printf("%d\n", ft_isalnum('_'));
	printf("%d\n", ft_isalnum('\n'));
	printf("%d\n", ft_isalnum('A'));
}