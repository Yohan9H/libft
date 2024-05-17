/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan.h <yohan.h@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:43:53 by yohan.h           #+#    #+#             */
/*   Updated: 2024/03/25 20:31:25 by yohan.h          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	boucle(const char *str, const char *nd, size_t *i)
{
	size_t	k;
	size_t	tmp;

	k = 0;
	tmp = *i;
	while (str[*i] == nd[k] && str[*i])
	{
		*i = *i + 1;
		k++;
	}
	*i = tmp;
	return (k);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (!needle[i])
		return ((char *)&haystack[i]);
	while (len > 0 && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			k = boucle(haystack, needle, &i);
			if (!needle[k])
				return ((char *)&haystack[i]);
		}
		len--;
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <bsd/string.h>
// int	main()
// {
// 	const char	s1[] = "Salutalik";
// 	const char 	s2[] = "ali";
// 	size_t		len = 10;

// 	printf("My function   : %s\n", ft_strnstr(s1, s2, len));
// 	printf("Reel function : %s\n", strnstr(s1, s2, len));
// 	return (0);
// }