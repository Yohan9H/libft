/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan.h <yohan.h@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:35:13 by yohan.h           #+#    #+#             */
/*   Updated: 2024/04/05 22:21:47 by yohan.h          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len_s(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc((len_s(s) + 1) + sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}

/*char	f(unsigned int i, char c)
{
	(void)i;
	c -= 32;
	return (c);
}

#include <stdio.h>
int	main()
{
	char const	*s = "salut";
	char		*str;

	printf("Before : %s\n", s);
	printf("After  : %s\n", str = ft_strmapi(s, f));
	free(str);
	return (0);
}*/ 