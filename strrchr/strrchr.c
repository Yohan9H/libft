/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan.h <yohan.h@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:47:13 by yohan.h           #+#    #+#             */
/*   Updated: 2024/03/25 19:02:38 by yohan.h          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	cpy_c;
	int		i;

	i = 0;
	cpy_c = (char)c;
	while (s[i])
		i++;
	i--;
	while (s[i])
	{
		if (s[i] == cpy_c)
			return ((char *)&s[i]);
		i--;
	}
	if (cpy_c == '\0' && !s[i])
		return ((char *)&s[i]);
	return (NULL);
}

/*#include <string.h>
#include <stdio.h>
int	main()
{
	const char	s[] = "Salutloo";
	char		c = 'l';

	printf("My function   : %s\n", ft_strrchr(s, (int)c));
	printf("Reel function : %s\n", strrchr(s, (int)c));
}*/