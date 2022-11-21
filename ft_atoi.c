/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adkazoui <adkazoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:27:24 by adkazoui          #+#    #+#             */
/*   Updated: 2022/11/09 19:22:17 by adkazoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	neg;	
	int	n;

	neg = 1;
	n = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '+' || *nptr == '-')
		neg *= (-2 *(*(nptr)++ == '-') + 1);
	while (*nptr >= '0' && *nptr <= '9')
		n = (n * 10) + (*(nptr)++ - 48);
	return (n * neg);
}
