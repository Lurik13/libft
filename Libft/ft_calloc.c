/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 02:35:34 by lribette          #+#    #+#             */
/*   Updated: 2023/10/23 04:07:17 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr)
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
int main(void)
{
    printf("%s", calloc(8539, sizeof(int)));
    printf("%s", ft_calloc(8539, sizeof(int)));
}*/
