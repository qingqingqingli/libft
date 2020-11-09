# include "libft.h"
# include <stdio.h>

int	main(void)
{
	char	*str;
	int		ret;

	str = "123456789";
	ret = ft_atoi(str);
	printf("ret is %d\n", ret);
	return (0);
}