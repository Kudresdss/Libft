/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymirna <ymirna@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:14:15 by ymirna            #+#    #+#             */
/*   Updated: 2021/10/26 18:40:54 by ymirna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_chrcmp(char const c1, char const	*set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	i = 0;
	start = 0;
	end = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (ft_chrcmp(s1[i++], set))
		start++;
	if (start == len)
		return (ft_substr(s1, 0, 0));
	i = len - 1;
	while (ft_chrcmp(s1[i--], set))
		end++;
	str = ft_substr(s1, start, len - start - end);
	return (str);
}
