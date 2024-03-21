/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Yohan.H <yhurtebize58@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 23:35:45 by Yohan.H           #+#    #+#             */
/*   Updated: 2024/03/20 23:35:48 by Yohan.H          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char	*cpy_dest;
	unsigned char	*cpy_src;
	int				i;

	cpy_dest = (unsigned char *)dest;
	cpy_src = (unsigned char *)src;
	i = 0;
	while (i != size)
	{
		cpy_dest[i] = cpy_src[i];
		i++;
	}
	return (dest);
}

/*#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
int     main()
{
    char        *dest = "yo";
    const char  *src = "salut mon pote";
    size_t      size = strlen(src);

    char        *dest_r = "yo";
    const char  *src_r = "salut mon pote";
    size_t      size_r = strlen(src_r);

    dest = (char *)malloc(size * sizeof(char));
    ft_memcpy(dest, src, size);
    printf("My function   : %s\n", dest);
    free(dest);

    dest_r = (char *)malloc(size_r * sizeof(char));
    memcpy(dest_r, src_r, size_r);
    printf("Reel function : %s\n", dest_r);
    free(dest_r);

    return (0);
}*/