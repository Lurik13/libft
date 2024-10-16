/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:53:41 by lribette          #+#    #+#             */
/*   Updated: 2023/10/23 02:46:18 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, int size)
{
	char	*cdest;
	char	*csrc;
	int		i;

	if ((!source || !dest) || size == 0)
		return (dest);
	cdest = (char *)dest;
	csrc = (char *)source;
	i = -1;
	if (cdest > csrc)
	{
		while (size-- > 0)
			cdest[size] = csrc[size];
	}
	else
	{
		while (++i < size)
			cdest[i] = csrc[i];
	}
	return (cdest);
}
/*
int main()
{
    char str[100] = "Learningisfun";
    char *first, *second;
    first = str;
    second = str;
    printf("Original string :%s\n ", str);

    // when overlap happens then it just ignore it
    memmove(first + 8, first, 10);
    printf("memmove : %s\n ", str);

    // when overlap it start from first position
    ft_memmove(second + 8, second, 10);
    printf("ft_memmove : %s\n ", str);

    return 0;
}*/
