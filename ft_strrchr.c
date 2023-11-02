/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 23:05:57 by lribette          #+#    #+#             */
/*   Updated: 2023/10/23 02:46:18 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = ft_strlen(s);
	if ((char)c == '\0')
		return (str + i);
	while (str[--i] != (char)c)
	{
		if (i == -1)
			return (NULL);
	}
	return (str + i);
}
/*
int     main(void)
{
        char    *s = "bonjour";
        char    *s2 = "bonjour";
        printf("%s\n", ft_strrchr(s + 2, 'b'));
        printf("%s\n", strrchr(s2 + 2, 'b'));
}*/
