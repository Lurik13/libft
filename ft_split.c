/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:35:40 by lribette          #+#    #+#             */
/*   Updated: 2023/10/28 16:44:02 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	unsigned int	number;
	unsigned int	i;
	unsigned int	isword;

	number = 0;
	i = -1;
	isword = 0;
	while (s[++i])
	{
		if (s[i] != c && isword == 0)
		{
			number++;
			isword = 1;
		}
		else if (s[i] == c && isword == 1)
			isword = 0;
	}
	return (number);
}

static char	*ft_worddup(const char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		index;

	split = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	i = -1;
	j = 0;
	index = -1;
	while (++i <= (int)ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == (int)ft_strlen(s)) && index >= 0)
		{
			split[j++] = ft_worddup(s, index, i);
			index = -1;
		}
	}
	split[j] = 0;
	return (split);
}
/*
int		main(void)
{
	int i = 0;
	char **tab;

	tab = ft_split("bonjour je m'appelle Lucas", ' ');
	while (i < 5)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}*/
