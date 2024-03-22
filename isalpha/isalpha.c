/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan.h <yohan.h@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:43:24 by yohan.h           #+#    #+#             */
/*   Updated: 2024/03/22 16:49:41 by yohan.h          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

/*#include <ctype.h>
#include <stdio.h>
int	main()
{
	int	c = 50;

	printf("My function   : %d\n", ft_isalpha(c));
	printf("Reel function : %d\n", isalpha(c));

	return (0);
}*/