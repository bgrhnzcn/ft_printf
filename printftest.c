#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	char str[] = "asd";
	printf("%d\n", printf("\001.\002.\007.\v.\010.\f.\r.\n."));
	printf("%d\n", ft_printf("\001.\002.\007.\v.\010.\f.\r.\n."));
	printf("%d\n", printf("%%"));
	printf("%d\n", ft_printf("%%"));
	printf("%d\n", printf(" %%"));
	printf("%d\n", ft_printf(" %%"));
	printf("%d\n", printf("%%c", 'x'));
	printf("%d\n", ft_printf("%%c", 'x'));
	printf("%d\n", printf("%p", ""));
	printf("%d\n", ft_printf("%p", ""));
}