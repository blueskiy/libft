/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:14:35 by fimachad          #+#    #+#             */
/*   Updated: 2022/06/16 11:07:18 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_chars(const char *s, char c)
{
	size_t	k;
	char	*str;

	k = 0;
	while ((s[k] != c) && (s[k] != '\0'))
		k++;
	str = (char *)malloc((k * sizeof(char)) + 1);
	if (str == NULL)
		return (NULL);
	k = 0;
	while (s[k] != c && s[k] != '\0')
	{
		str[k] = s[k];
		k++;
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
		if (s[j] != c && (j == 0))
			i++;
		else if ((s[j] != c) && ((s[j - 1] == c)))
			i++;
		j++;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	size_t	k;
	size_t	z;
	char	**chars;

	if (!s)
		return (NULL);
	k = 0;
	while (s[k] == c || s[k] == '\0')
		k++;
	if (s[k] == '\0')
		return (NULL);
	k = 0;
	z = 0;
	chars = (char **)malloc((ptr_count(s, c) * sizeof(char *)) + 1);
	if (chars == NULL)
		return (NULL);
	while (z < ptr_count(s, c))
	{
		while ((s[k] == c) && s[k])
			k++;
		chars[z] = get_chars(&s[k], c);
		k = k + ft_strlen(chars[z]);
		z++;
	}
	chars[z] = NULL;
	return (chars);
}
