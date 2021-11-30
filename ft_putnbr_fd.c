/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymirna <ymirna@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:31:39 by ymirna            #+#    #+#             */
/*   Updated: 2021/10/22 16:13:43 by ymirna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	s;

	if (n < 0)
		ft_putchar_fd('-', fd);
	s = (unsigned)ft_abs(n);
	if (n / 10 != 0)
	{
		ft_putnbr_fd(s / 10, fd);
		ft_putnbr_fd(s % 10, fd);
	}
	else
		ft_putchar_fd(s + '0', fd);
}
