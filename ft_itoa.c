/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 14:12:57 by fimachad          #+#    #+#             */
/*   Updated: 2022/06/11 15:00:00 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>

static size_t    calculate_int_length(int i)
{
    size_t    c;

    c = 0;
    while (i > 0)
    {
        i /= 10;
        c++;
    }
    return (c);
}

char    *ft_itoa(int n)
{
    size_t	c;
    char	*s;
    int		is_negative;

    c = calculate_int_length(n);
    if (n < 0)
    {
        n = (n + 1) * (-1);
        is_negative = 1;
        c++;
    }
    s = (char *)malloc(c +1);
	s[c] = '\0';
    while (c-- > 0)
    {
		printf("printa n igual a: %d\n", n);
        s[c] = (n % 10) + 48;
        n /= 10;
		printf("é um char %c\n", s[c]);
    }
    return (s);
}

int	main(void)
{
	printf("kakaka %s", ft_itoa(120));
	return (0);
}
