/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan.h <yohan.h@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:08:18 by yohan.h           #+#    #+#             */
/*   Updated: 2024/05/16 10:47:05 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	c_bzero(void *s, size_t n)
{
	unsigned char	*cpy_s;
	size_t			i;

	cpy_s = (unsigned char *)s;
	i = 0;
	while (i != n)
	{
		cpy_s[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;

	s = (void *)malloc(nmemb * size);
	if (!s)
		return (NULL);
	c_bzero(s, nmemb);
	return (s);
}

/*#include <stdio.h>
int	main()
{
	char	*str;
	size_t	count = 5;
	size_t	size = sizeof(int);

	printf("My function   : ");
	str = (char *)ft_calloc(count, size);
    for (size_t i = 0; i < count; i++) {
        printf("%d ", str[i]);
	}
	printf("\n");
	free(str);

	printf("Reel function : ");
	str = (char *)calloc(count, size);
    for (size_t i = 0; i < count; i++) {
        printf("%d ", str[i]);
	}
	printf("\n");
	free(str);
	
	return (0);
}*/
