/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:33:53 by lribette          #+#    #+#             */
/*   Updated: 2023/10/23 02:47:08 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <bsd/string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (--size && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	dest[] = "salut";
	printf("%ld\n%s\n", ft_strlcpy(dest, "coucou", 3), dest);
	printf("%ld\n%s", strlcpy(dest, "coucou", 3), dest);
}*/
