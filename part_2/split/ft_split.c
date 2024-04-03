/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan.h <yohan.h@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:43:18 by yohan.h           #+#    #+#             */
/*   Updated: 2024/04/03 18:04:06 by yohan.h          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 1;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	if (i == 0)
		return (0);
	else
		return (count);
}

int	len_split(char const *s, char c, size_t *i)
{
	int	j;

	if (*i > 0)
		*i = *i + 1;
	while (s[*i] != c)
		*i = *i + 1;
	j = *i;
	return (j);
}

void	split_cpy(char const *s, char *str, char c, size_t *o)
{
	size_t	i;

	i = 0;
	while (s[*o] != c && s[*o])
	{
		str[i] = s[*o];
		*o = *o + 1;
		i++;
	}
	if (s[*o])
		*o = *o + 1;
	str[i] = '\0';
}

int	split_dup(char const *s, char **str, char c, size_t *ct_word)
{
	size_t	k;
	size_t	svg;
	size_t	o;

	k = 0;
	svg = 0;
	o = 0;
	while (k < *ct_word)
	{
		str[k] = (char *)malloc(len_split(s, c, &svg) * sizeof(char));
		if (!str[k])
			return (1);
		split_cpy(s, str[k], c, &o);
		k++;
	}
	str[k] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	ct_word;

	ct_word = ft_count_words(s, c);
	str = (char **)malloc((ct_word + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	if (split_dup(s, str, c, &ct_word) == 1)
		return (NULL);
	return (str);
}

/*#include <stdio.h>
int	main()
{
	char const	*s = "salut-mon-pote";
	char		c = '-';
	char		**str;
	size_t		i = 0;

	str = ft_split(s, c);
	printf("My function :\n");
	while (str[i])
	{
		printf("%s\n", str[i]);
		free(str[i]);
		i++;
	}
	free(str);
}*/