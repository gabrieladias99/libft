int	ft_isprint(int c)
{
	if ((c >= 32 && c<= 126))
		return 1;
	return 0;
}

#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_isprint('1'));
	printf("%d\n", ft_isprint('2'));
	printf("%d\n", ft_isprint('3'));
	printf("%d\n", ft_isprint(':'));
	printf("%d\n", ft_isprint('_'));
	printf("%d\n", ft_isprint('\n'));
	printf("%d\n", ft_isprint('A'));
}