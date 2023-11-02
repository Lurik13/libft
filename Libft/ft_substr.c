/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 04:26:33 by lribette          #+#    #+#             */
/*   Updated: 2023/10/30 15:30:59 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	str = malloc((len + 1));
	if (!str)
		return (NULL);
	while (start < ft_strlen(s) && i < len)
		str[i++] = s[start++];
	str[len] = '\0';
	return (str);
}

/*
int	main(void)
{
	char	s1[100] = "coucou";
	printf("%s\n", ft_substr(s1, 5, 2));
}*/
