/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:27:09 by lribette          #+#    #+#             */
/*   Updated: 2023/10/23 02:46:18 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*str;

	str = b;
	if (!b)
		return (0);
	while (n)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
	return (b);
}
/*
int	main(void)
{
	char	str[] = "abcdefghijabcdefghij";
	ft_memset(str, 78, 100000);
	memset(str, 78, 100000);
	printf("%s", str);
}*/
