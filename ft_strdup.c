/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 04:08:01 by lribette          #+#    #+#             */
/*   Updated: 2023/10/23 04:23:26 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		i;
	int		len;

	if (!s)
		return (NULL);
	i = -1;
	len = ft_strlen(s);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s[++i])
		ptr[i] = s[i];
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	s[100] = "salut";
	printf("%s", strdup(s));
	printf("%s", ft_strdup(s));
}*/
