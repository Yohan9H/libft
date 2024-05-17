/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan.h <yohan.h@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:14:20 by yohan.h           #+#    #+#             */
/*   Updated: 2024/03/25 18:17:21 by yohan.h          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 89)
		c += 32;
	return (c);
}

/*#include <ctype.h>
#include <stdio.h>
int	main()
{
	int	c = 68;

	printf("Before c = \'%c\'\n", (char)c);
	printf("My function   : %c\n", (char)ft_tolower(c));
	printf("Reel function : %c\n", (char)tolower(c));
	return (0);
}*/