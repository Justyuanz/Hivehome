#include "libft.h"
#include <stdio.h>
int	ft_isset(char c, char const*set)
{
	size_t	i;

	i = 0;
	while(set[i])
	{
		if(c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*sub;
	size_t	start;
	size_t len;

	if(!s1)
		return (NULL);
	start = 0;
	len = ft_strlen(s1);
	while(s1[start] && ft_isset(s1[start], set))
		start++;
	while(len > start && s1[len - 1] && ft_isset(s1[len - 1], set))
		len--;
	sub = ft_substr(s1, start, (len - start));
	return(sub);
}
#include <stdio.h>
int	main(void)
{
	char const *s1 = "";
	char const	*set = "2";
	char	*str = ft_strtrim(s1, set);
	printf("%s", str);
	free(str);
}
/*
When allocating memory for the substring, you're using sizeof(char const *) instead of sizeof(char). This will allocate more memory than needed. The correct size is sizeof(char), not sizeof(char const *).
*/