int	ft_isalpha(int c)
{
	if ((c >= 65 && c <=90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha(' '));
	printf("%d\n", ft_isalpha('~'));
	printf("%d\n", ft_isalpha('_'));
	printf("%d\n", ft_isalpha('\n'));
	printf("%d\n", ft_isalpha('A'));
}