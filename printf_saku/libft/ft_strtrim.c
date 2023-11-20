/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:51:09 by svesa             #+#    #+#             */
/*   Updated: 2023/11/09 14:13:53 by svesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const *s, char const *set)
{
	int	i;
	int	j;
	int	mark;

	i = 0;
	mark = 0;
	while (s[i] != '\0')
	{
		mark = 0;
		j = 0;
		while (set[j] != '\0')
		{
			if (s[i] == set[j])
				mark = 1;
			j++;
		}
		if (mark == 0)
			break ;
		i++;
	}
	return (i);
}

static int	ft_end(char const *s, char const *set)
{
	int	i;
	int	j;
	int	mark;

	i = ft_strlen(s) - 1;
	mark = 0;
	while (i > 0)
	{
		mark = 0;
		j = 0;
		while (set[j] != '\0')
		{
			if (s[i] == set[j])
				mark = 1;
			j++;
		}
		if (mark == 0)
			break ;
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	j = 0;
	i = ft_start(s1, set);
	if (ft_end(s1, set) - ft_start(s1, set) < 0)
	{
		str = malloc(1 * sizeof(char));
		str[0] = '\0';
		return (str);
	}
	str = malloc(((ft_end(s1, set) - ft_start(s1, set)) + 2) * sizeof(char));
	if (str == 0)
		return (0);
	while (i <= ft_end(s1, set))
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*
int main()
{
	char const s[30] = "lorem ipsum dolor sit amet";
	char const set[10] = "let";
	printf("%s",ft_strtrim(s,set));
}
*/
