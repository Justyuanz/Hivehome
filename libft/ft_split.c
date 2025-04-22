#include "libft.h"
#include <stdio.h>
	//check input validation
	//count words using delimiter, then we have indexes of the array
	//like argv, the last in the array is NULL
	//count size for each element
int	count_words(char const *s, char c)
{
	size_t len;
	size_t	i;
	int	word;

	i = 0;
	word = 0;
	len = ft_strlen(s);
	while(i < len)
	{
		if(s[i] != c && (s[i + 1] == c || s[i  + 1] == '\0'))
			word++;
		i++;
	}
	return (word);
}
int	word_len(char const *s, char c)
{
	int	i;
	size_t	len;

	i = 0;
	len = 0;
	while(c == s[i])
		i++;
	while(s[i] != c && (s[i + 1] == c || s[i  + 1] == '\0'))
	{
		i++;
		len++;
	}
	return (len);
}
char	**ft_split(char const *s, char c)
{
	char	**arr;
	int	totalwords;
	size_t	i;
	size_t	j;
	size_t	wordlen;

	i = 0;
	j = 0;
	if(!s)
		return (NULL);
	totalwords = count_words(s, c);
	arr = malloc((totalwords + 1) * sizeof(char *));
	arr[totalwords] = NULL;
	if(!arr)
		return (NULL);
	while (i < totalwords)
	{
		wordlen = word_len(s[i], c);
		malloc((wordlen + 1) * sizeof(char));
		while(j < wordlen)
		{
			ft_substr(s, j, wordlen);
		}
		i++;
	}
	return(arr);
}
int	main(void)
{
	char const *s = ",Hello,,this is,,a,,test,,hah";
	char	c =',';
	
	ft_split(s, c);
}