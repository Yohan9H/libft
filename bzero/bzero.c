/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Yohan.H <yhurtebize58@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:49:36 by Yohan.H           #+#    #+#             */
/*   Updated: 2024/03/20 14:07:08 by Yohan.H          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*cpy_s;
	size_t		i;

	cpy_s = (unsigned char *)s;
	i = 0;
	while (i != n)
	{
		cpy_s[i] = '\0';
		i++;
	}
}

/*#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int	main()
{
	char	tab[5] = "salut";
	size_t	n = sizeof(tab);
	char	tab_r[5] = "salut";
	size_t	n_r = sizeof(tab_r);

	bzero(tab_r, n_r);
	printf("Reel function : %s\n", tab_r);

	ft_bzero(tab, n);
	printf("My function   : %s\n", tab);

	return (0);
}*/