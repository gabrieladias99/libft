int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit('2'));
	printf("%d\n", ft_isdigit('3'));
	printf("%d\n", ft_isdigit(':'));
	printf("%d\n", ft_isdigit('_'));
	printf("%d\n", ft_isdigit('\n'));
	printf("%d\n", ft_isdigit('A'));
}