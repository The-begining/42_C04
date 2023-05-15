/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 01:50:23 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/22 23:08:19 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	store_value(long nbl)
{
	int		i;
	char	to_holdint[11];

	i = 0;
	if (nbl < 0)
	{
		nbl *= -1;
		write (1, "-", 1);
	}
	while (nbl > 0)
	{
		to_holdint[i++] = (nbl % 10) + '0';
		nbl /= 10;
	}
	while (i-- > 0)
		write (1, &to_holdint[i], 1);
}

void	ft_putnbr(int nb)
{
	int		i;
	long	nbl;
	char	c;

	i = 0;
	nbl = nb;
	if (nbl == 0)
	{
		c = nbl + 48;
		write (1, &c, 1);
	}
	else
		store_value(nbl);
}

// int main (void)
// {
// 	ft_putnbr(-2147483648);
// 	write (1, "\n", 1);
// 	ft_putnbr(0);
// 	write (1, "\n", 1);
// 	ft_putnbr(100);
// 	write (1, "\n", 1);
// 	return(0);
// }
