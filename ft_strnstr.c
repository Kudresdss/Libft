/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymirna <ymirna@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:42:07 by ymirna            #+#    #+#             */
/*   Updated: 2021/10/26 17:31:55 by ymirna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*h, const char	*n, size_t	len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!n[i])
		return ((char *)h);
	while (h[i] && i < len)
	{
		j = 0;
		while (h[i + j] && h[i + j] == n[j] && n[j] && i + j < len)
		{
			j++;
		}
		if (!n[j])
			return ((char *)(h + i));
		i++;
	}
	return (NULL);
}
