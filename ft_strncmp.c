/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:08:59 by fimachad          #+#    #+#             */
/*   Updated: 2022/05/23 21:14:18 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if ((unsigned char)s1[i] == (unsigned char)s2[i])
			i++;
		else if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		else
			return (1);
	}
	if (s1[0] == '\0' && s2[0] != '\0')
		return (-1);
	if (s2[0] == '\0' && s1[0] != '\0')
		return (1);
	return (0);
}
