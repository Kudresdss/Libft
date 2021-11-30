/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymirna <ymirna@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:15:10 by ymirna            #+#    #+#             */
/*   Updated: 2021/10/20 17:13:36 by ymirna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*s, int c, size_t	n)
{
	unsigned char	ci;
	unsigned char	*si;

	ci = (unsigned char)c;
	si = (unsigned char *)s;
	while (n > 0)
	{
		if (*si == ci)
			return (si);
		si++;
		n--;
	}
	return (NULL);
}
