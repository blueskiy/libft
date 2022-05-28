/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:18:37 by fimachad          #+#    #+#             */
/*   Updated: 2022/05/28 18:59:47 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	if (ft_strlen(src) == 0)
	{
		dst[0] = '\0';
		return (0);
	}
	i = 0;
	while (dstsize != 0)
	{
		dst[i] = src[i];
		dstsize--;
		i++;
		if (src[i - 1] == '\0')
			break ;
	}
	dst[i - 1] = '\0';
	return (ft_strlen(src));
}
