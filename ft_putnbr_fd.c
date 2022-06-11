/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 19:37:45 by fimachad          #+#    #+#             */
/*   Updated: 2022/06/11 09:40:26 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	nbr;

	nbr = n;
	if (n < 0)
	{
		n = (n + 1) * (-1);
		ft_putchar_fd('-', fd);
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	if (!(nbr < 0))
		ft_putchar_fd((n % 10) + 48, fd);
	else
		ft_putchar_fd((n % 10) + 49, fd);
}
