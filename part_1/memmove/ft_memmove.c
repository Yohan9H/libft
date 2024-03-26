/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Yohan.H <yhurtebize58@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:39:41 by Yohan.H           #+#    #+#             */
/*   Updated: 2024/03/22 11:39:42 by Yohan.H          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_verif_mem(unsigned char *dest, const unsigned char *src)
{
	if (src <= dest)
		return (1);
	else
		return (0);
}

void	ft_mem_true(unsigned char *dest, const unsigned char *src, size_t len)
{
	len -= 1; // Ne fonction pas quand src == " "
	while (len > 0)
	{
		dest[len] = src[len];
		len--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*cpy_dest;
	const unsigned char	*cpy_src;
	unsigned int		i;

	cpy_dest = (unsigned char *)dest;
	cpy_src = (const unsigned char *)src;
	i = 0;
	if (ft_verif_mem(cpy_dest, cpy_src) == 1)
	{
		ft_mem_true(cpy_dest, cpy_src, len);
		return (dest);
	}
	else
	{
		while (i < len)
		{
			cpy_dest[i] = cpy_src[i];
			i++;
		}
	}
	return (dest);
}

#include <string.h>
#include <stdio.h>
int		main()
{
	char	src[] = " ";
	char	dest[] = "Yo mon gars";
	size_t	len = sizeof(src);

	char	src_r[] = "Salut mon pote";
	char	dest_r[] = "Yo gars";
	size_t	len_r = sizeof(src_r);

	ft_memmove(dest, src, len);
	printf("My function	  : %s\n", dest);

	memmove(dest_r, src_r, len_r); // Ne fonctionne pas
	printf("Reel function : %s\n", dest_r);
}