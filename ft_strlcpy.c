/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan.h <yohan.h@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:37:16 by yohan.h           #+#    #+#             */
/*   Updated: 2024/03/22 19:46:09 by yohan.h          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstlen)
{
	size_t	i;

	i = 0;
	while (src[i] && dstlen > 0)
	{
		dst[i] = src[i];
		dstlen--;
		i++;
	}
	dst[i - 1] = '\0';
	while (src[i])
		i++;
	return (i);
}

/*#include <string.h>
#include <stdio.h>
int	main()
{
	char		dst[] = "  ";
	const char	src[] = "salut-toi";
	size_t		dstlen = strlen(dst);

	char		dst_r[] = "  ";
	const char	src_r[] = "salut-toi";
	size_t		dstlen_r = strlen(dst_r);

	printf("My function   : %lu\n", ft_strlcpy(dst, src, dstlen));
	printf("dst   : %s\n", dst);
	printf("src   : %s\n----------\n", src);
	printf("Reel function : %lu\n", strlcpy(dst_r, src_r, dstlen_r));
	printf("dst_r : %s\n", dst_r);
	printf("src_r : %s\n", src_r);
	return (0);
}*/