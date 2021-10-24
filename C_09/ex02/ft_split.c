#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int	ft_char_is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_separator(str[i + 1], charset) == 1
			&& ft_char_is_separator(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

void	ft_write_word(char *dest, char *from, char *charset)
{
	int	i;

	i = 0;
	while (ft_char_is_separator(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_write_split(char **split, char *str, char *charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_separator(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (ft_char_is_separator(str[i + j], charset) == 0)
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			ft_write_word(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		words;

	words = ft_count_words(str, charset);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	res[words] = 0;
	ft_write_split(res, str, charset);
	return (res);
}

/*int		main(void)
{
	char str[100] = "NFfbgWUt9OcOiCEJE      VpBdhUhT L wkyGk7       qmJD5uMbH6X";
	char	sep[10] = "ESn";
	char	**result;
	result = malloc(sizeof(char*) * 15);
	// printf("lentgth %d\n",ft_strlen(str));
	//  printf("simple split: %s\n",ft_simple_split(str,sep));
	printf("sentence to split: %s\n", str);
	printf("separator :%s\n", sep);
	result = ft_split(str, sep);
	int	i;
	i = 0;
	while(result[i] != NULL)
	{
		printf("pointer %d: $%s$\n",i,result[i]);
		i++;
	}
}*/
