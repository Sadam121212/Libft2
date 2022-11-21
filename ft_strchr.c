/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adkazoui <adkazoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:48:13 by adkazoui          #+#    #+#             */
/*   Updated: 2022/11/12 19:25:27 by adkazoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	l;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	while (l-- >= 0)
	{
		if (*s == c % 256)
			return ((char *)s);
		s++;
	}
	return (0);
}
