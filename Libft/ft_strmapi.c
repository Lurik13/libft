/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:28:54 by lribette          #+#    #+#             */
/*   Updated: 2023/10/28 16:39:13 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	i = -1;
	str = malloc(ft_strlen(s) + 1);
	if (!s || !str)
		return (NULL);
	while (++i < ft_strlen(s))
		str[i] = f(i, s[i]);
	str[i] = '\0';
	return (str);
}
