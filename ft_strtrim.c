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

#include <unistd.h>
#include <stdlib.h>

size_t	t_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	set_cpy(const char *s1, char const *set, size_t *start, size_t *end)
{
	size_t	i;
	size_t	len_set;
	size_t	len_s1;
	size_t	check;

	check = 0;
	i = 0;
	len_s1 = t_strlen(s1);
	len_set = t_strlen(set);
	while (s1[i] == set[i])
		i++;
	*start = i;
	while (i != (len_s1 - len_set))
	{
		i++;
		check = 1;
	}
	if (check == 1)
		*end = i;
	else
		*end = i - 1;
}

void	trim_cpy(char const *s1, char *str, size_t start, size_t end)
{
	size_t	i;

	i = 0;
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	if (s1[0] == '\0')
		return (NULL);
	set_cpy(s1, set, &start, &end);
	str = (char *)malloc((t_strlen(s1) - (t_strlen(set) * 2)) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	trim_cpy(s1, str, start, end);
	return (str);
}

/*#include <stdio.h>
int	main()
{
	char const	*s1 = "---salut---";
	char const	*set = "-"; 
	// ne fonctionne pas si set n'existe pas dans s1 ex : j dans le cas -salut-
	char		*str;

	printf("My function : %s\n", str = ft_strtrim(s1, set));
	free(str);
	return (0);
}*/