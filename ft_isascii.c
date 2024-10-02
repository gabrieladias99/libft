int ft_isascii(int c)
{
    if (c >= 0 && c<=177)
        return 1;
    return 0;
}

#include <stdio.h>
int main(void)
{
    printf("%d", ft_isascii(200));
	printf("%d", ft_isascii('a'));

}