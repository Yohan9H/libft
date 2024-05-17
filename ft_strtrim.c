/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan.h <yohan.h@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:45:13 by yohan.h           #+#    #+#             */
/*   Updated: 2024/04/15 12:17:19 by yohan.h          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	trim_n(char *str, char const *s1, char const *set)
{
	size_t	k;
	size_t	j;
	size_t	i;

	k = 0;
	j = 0;
	i = ft_strlen(s1);
	i--;
	while (s1[i] == set[0])
		i--;
	while (s1[k] == set[0])
		k++;
	while (k <= i)
	{
		str[j] = s1[k];
		k++;
		j++;
	}
	str[j] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	lgt;

	i = 0;
	lgt = 0;
	while (s1[i] == set[0])
	{
		i++;
		lgt++;
	}
	i = ft_strlen(s1);
	i--;
	while (s1[i] == set[0])
	{
		i--;
		lgt++;
	}
	str = (char *)malloc((ft_strlen(s1) - lgt + 1) * sizeof(char));
	trim_n(str, s1, set);
	return (str);
}

/*#include <stdio.h>
int	main()
{
	char const	*s1 = "--salut-mon-gars--";
	char const	*set = "-";
	char		*str;

	printf("My function : %s\n", str = ft_strtrim(s1, set));
	free(str);
	return (0);
}*/