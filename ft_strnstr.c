/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:04:08 by lribette          #+#    #+#             */
/*   Updated: 2023/10/23 02:46:18 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*cbig;
	size_t	i;
	size_t	j;
	size_t	llen;

	if (!big || !little)
		return (NULL);
	cbig = (char *)big;
	i = 0;
	llen = ft_strlen(little);
	if (!llen || big == little)
		return (cbig);
	while (cbig[i] && i < len)
	{
		j = 0;
		while (cbig[i + j] && little[j] && cbig[i + j] == little[j]
			&& i + j < len)
			j++;
		if (j == llen)
			return (cbig + i);
		i++;
	}
	return (NULL);
}
