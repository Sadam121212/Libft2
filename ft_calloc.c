/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adkazoui <adkazoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:28:52 by adkazoui          #+#    #+#             */
/*   Updated: 2022/11/09 16:44:50 by adkazoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char			*p;
	size_t			i;
	const size_t	size_m = nmemb * size;

	i = 0;
	p = NULL;
	if (nmemb && size_m / nmemb != size)
		return (0);
	p = malloc(size_m);
	if (!p)
		return (0);
	while (i < size_m)
		*(p + i++) = '\0';
	return (p);
}
