/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:54:27 by svesa             #+#    #+#             */
/*   Updated: 2023/11/14 15:12:33 by svesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if ((s[i] == c && s[i + 1] != c) || (s[i] != c && s[i + 1] == '\0'))
			cnt++;
		i++;
	}
	return (cnt);
}

static char	*ft_makestr(const char *s, char c)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (s[i] == c)
		i++;
	j = i;
	while (s[j] != c && s[j] != '\0')
		j++;
	str = (char *)malloc((j - i + 1) * sizeof(char));
	j = 0;
	while (s[i] != c && s[i] != '\0')
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}

static int	ft_nextword(const char *s, char c, int pos)

{
	int	i;

	i = pos;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
		i++;
	while (s[i] == c && s[i] != '\0')
		i++;
	return (i);
}

static char	*ft_free(char **arr, int n)
{
	int	i;

	i = n;
	while (i > 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		count;
	char	**split;

	i = 0;
	j = 0;
	count = ft_wordcount(s, c);
	split = (char **)malloc((count + 1) * sizeof(char *));
	if (split == 0)
		return (0);
	while (i < count)
	{
		split[i] = ft_makestr((s + j), c);
		if (split[i] == 0)
			return ((char **) ft_free(split, i));
		i++;
		j = ft_nextword(s, c, j);
	}
	split[i] = 0;
	return (split);
}
/*
int main()
{
const char s[] = "hello";
char c = ' ';
char **ptr = ft_split(s,c);
for (int i = 0; ptr[i] != NULL; i++)
	printf("%s\n", ptr[i]);
}*/
