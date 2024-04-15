/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan.h <yohan.h@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:17:16 by yohan.h           #+#    #+#             */
/*   Updated: 2024/03/25 19:41:35 by yohan.h          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0 && s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		n--;
	}
	return (s1[i] - s2[i]);
}

/*#include <string.h>
#include <stdio.h>
int	main()
{
	const char	s1[] = "salut";
	const char	s2[] = "sal";
	size_t		n = 9;

	printf("My function   : %d\n", ft_strncmp(s1, s2, n));
	printf("Reel function : %d\n", strncmp(s1, s2, n));
}*/