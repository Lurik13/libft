/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:36:45 by lribette          #+#    #+#             */
/*   Updated: 2023/10/23 02:46:18 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, int size)
{
	char	*cdest;
	char	*csrc;
	int		i;

	if ((!source && !dest) || size == 0)
		return (dest);
	cdest = (char *)dest;
	csrc = (char *)source;
	i = -1;
	while (++i < size)
		cdest[i] = csrc[i];
	return (cdest);
}
/*
int	main(void)
{
	char	source[] = "salut";
	char	dest[] = "";

	ft_memcpy(dest, source, 4);
	printf("%s", dest);
	return (0);
}*/
/*
int main() 
{ 
    char str[100] = "Learn\\0ingisfun"; 
    char *first; 
    first = str;
    printf("Original string :%s\n ", str); 
      
    // when overlap happens then it just ignore it 
    memcpy(first + 8, first, 10); 
    printf("memcpy overlap : %s\n ", str); 
}*/
