/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adkazoui <adkazoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:48:49 by adkazoui          #+#    #+#             */
/*   Updated: 2022/11/12 19:35:38 by adkazoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	tmp;

	i = 0;
	if (!str)
		return (0);
	len = ft_strlen(str) - 1;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

int	ft_negative(long nb)
{
	if (nb < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	long	nb;

	nb = n;
	str = malloc(sizeof(char) * (ft_count(n) + ft_negative(nb) + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (nb == 0)
		str[i++] = '0';
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		str[i++] = nb % 10 + 48;
		nb = nb / 10;
	}
	if (ft_negative(n) == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev(str));
}
