/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:14:35 by fimachad          #+#    #+#             */
/*   Updated: 2022/06/13 22:34:40 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_str(const char *s, char c)
{
	size_t	k;
	char	*str;

	k = 0;
	while ((s[0] != c) && (s[0] != '\0'))
	{
		str[k] = s[0];
		k++;
		s++;
	}
	str[k] = '\0';
	return (str);
}

static size_t	ptr_count(const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[j])
	{
		if ((j == 0) && (s[j] != c))
			i++;
		else if ((s[j] != c) && (s[j - 1] == c))
			i++;
		j++;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	size_t	z;
	char	**letters;	
	
	z = 0;
	letters = (char **)malloc((ptr_count(s, c) * sizeof(char *)) + 1);
	if (letters == NULL)
		return (NULL);
	while (s[0])
	{
		if (s[0] == c)
		{
			letters[z] = get_str(s, c);
			z++;
		}
		s++;
	}
	letters[z] = NULL;
	return (letters);
}
