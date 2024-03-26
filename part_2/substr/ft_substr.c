/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan.h <yohan.h@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:25:34 by yohan.h           #+#    #+#             */
/*   Updated: 2024/03/26 17:10:36 by yohan.h          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
// Voir si il faut compter le \0 dans la copie de str 
// donc faire un len - 1 dans la condition de while
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[start + i] = '\0';
	return (str);
}

/*#include <stdio.h>
int	main()
{
	char			*s = "Salut-mon-pote";
	unsigned int	start = 6;
	size_t			len = 3;
	char			*res;

	printf("My function : %s\n", res = ft_substr(s, start, len));
	free(res);
	return (0);
}*/