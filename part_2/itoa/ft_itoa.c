/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan.h <yohan.h@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:08:10 by yohan.h           #+#    #+#             */
/*   Updated: 2024/04/03 19:43:41 by yohan.h          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	count_digit(int n)
{
	int	dgt;

	dgt = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		dgt++;
	}
	return (dgt);
}

void	ft_cpy(char *str, int i, int sgn, int n)
{
	int	svg;

	svg = i;
	i--;
	if (sign > 0)
	{
		str[0] = '-';
		i++;
	}
	while ((svg + sign) > sign)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i--;
		svg--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digit;
	int		sign;

	sign = 0;
	if (n < 0)
		sign++;
	if (n < 0)
		n *= -1;
	digit = count_digit(n);
	str = (char *)malloc((digit + sign + 1) * sizeof(char));
	ft_cpy(str, digit, sign, n);
	str[digit + sign] = '\0';
	return (str);
}

/*#include <stdio.h>
int	main()
{
	char	*str;
	int	n = -1234;

	printf("My function : %s\n", str = ft_itoa(n));
	free(str);
	return (0);
}*/