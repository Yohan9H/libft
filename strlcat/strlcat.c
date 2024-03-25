/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan.h <yohan.h@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:12:28 by yohan.h           #+#    #+#             */
/*   Updated: 2024/03/25 17:54:13 by yohan.h          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen_cat(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t	i;
	size_t	len_dst;
	size_t	res;

	i = 0;
	len_dst = ft_strlen_cat(dst);
	res = len_dst + ft_strlen_cat(src);
	if (len_dst >= destsize)
		return (res);
	while (i < destsize - 1 && src[i])
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (res);
}

/*#include <string.h>
#include <stdio.h>
int	main()
{
	// suffisament grand ok (ex : 45)
	//
	char		dst[10] = "salut";
	const char	*src = "-mon-gars";
	size_t		dstlen = sizeof(dst);

	char		dst_r[10] = "salut";
	const char	*src_r = "-mon-gars";
	size_t		dstlen_r = sizeof(dst_r);

	printf("My function   : %lu\n", ft_strlcat(dst, src, dstlen));
	printf("dst   : %s\n", dst);
	printf("src   : %s\n----------\n", src);
	printf("Reel function : %lu\n", strlcat(dst_r, src_r, dstlen_r));
	printf("dst_r : %s\n", dst_r);
	printf("src_r : %s\n", src_r);
	return (0);
}*/