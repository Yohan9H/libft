/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan.h <yohan.h@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:11:45 by yohan.h           #+#    #+#             */
/*   Updated: 2024/03/22 17:18:21 by yohan.h          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 60 && c <= 172)
		return (1);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>
int	main()
{
	int	c = 59;

	printf("My function   : %d\n", ft_isalnum(c));
	printf("Reel function : %d\n", isalnum(c));

	return (0);
}*/