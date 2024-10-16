/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:37:02 by lribette          #+#    #+#             */
/*   Updated: 2023/10/24 12:35:02 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	prefixe;
	size_t	suffixe;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	str = 0;
	if (s1 && set)
	{
		prefixe = 0;
		suffixe = ft_strlen(s1);
		while (s1[prefixe] && ft_strchr(set, s1[prefixe]))
			prefixe++;
		while (s1[suffixe - 1] && ft_strchr(set, s1[suffixe - 1])
			&& suffixe > prefixe)
			suffixe--;
		str = malloc(suffixe - prefixe + 1);
		if (str)
			ft_strlcpy(str, &s1[prefixe], suffixe - prefixe + 1);
	}
	return (str);
}
/*
int main()
{
	char s[30] = " \t\nThis is string. \tContinue.";
 	char *result = ft_strtrim(s, "");
 	printf("The result is %s\n", result);
 	return 0;
}*/
