/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:54:35 by lribette          #+#    #+#             */
/*   Updated: 2023/10/23 02:46:18 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *src, size_t n)
{
	char	*dest;

	dest = src;
	if (!src)
		return ;
	while (n)
	{
		*dest++ = 0;
		n--;
	}
}
/*
int	main(void)
{
	char	src[] = "salut";
	//char	src2[] = "salut";
	ft_bzero(src, 42);
	//bzero(src2, 42);
	printf("ft_bzero : %s\n", src);
	//printf("bzero : %s", src2);
	return (0);
}*/
