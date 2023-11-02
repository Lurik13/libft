/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:48:09 by lribette          #+#    #+#             */
/*   Updated: 2023/10/28 16:49:22 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int n)
{
	int	number;

	number = 1;
	if (n < 0)
	{
		n = -n;
		number++;
	}
	while (1)
	{
		n = n / 10;
		if (!n)
			break ;
		number++;
	}
	return (number);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	i;
	unsigned int	len_max;

	i = 0;
	len_max = (unsigned int)ft_size(n);
	str = malloc((len_max + 1) * sizeof(char));
	if (!ft_size(n) || !str)
		return (NULL);
	str[ft_size(n)] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		i++;
	}
	while (i < len_max)
	{
		len_max--;
		str[len_max] = ((unsigned int)n % 10) + 48;
		n = (unsigned int)n / 10;
	}
	return (str);
}
/*
int	main(void)
{
	printf("%s", ft_itoa(-2147483648));
}*/
