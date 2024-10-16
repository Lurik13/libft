/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 09:35:24 by lribette          #+#    #+#             */
/*   Updated: 2023/10/21 23:05:30 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	str = (char *)s;
	i = -1;
	while (str[++i] != (char)c)
	{
		if (str[i] == '\0')
			return (NULL);
	}
	return (str + i);
}
/*
int	main(void)
{
	char	*s = "teste";
	char	*s2 = "teste";
	printf("%s\n", ft_strchr(s, 'o'));
	printf("%s\n", strchr(s2, 'o'));
}*/
