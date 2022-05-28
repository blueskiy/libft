/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 11:26:19 by fimachad          #+#    #+#             */
/*   Updated: 2022/05/28 16:15:07 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	while (dst_len < dstsize)
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
