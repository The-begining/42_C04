/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:34:04 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/22 23:54:15 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

bool	is_valid_base(char *base)
{
	int		i;
	int		j;
	int		size;
	char	c;

	i = 0;
	size = 0;
	while (base[i] != '\0')
	{
		c = base[i];
		if (c == '+' || c == '-')
			return (false);
		size++;
		j = i + 1;
		while (base[j] == '\0')
		{
			if (c == base[j])
				return (false);
			j++;
		}
		i++;
	}
	return (size > 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		radix;
	bool	is_negative;
	int		i;
	char	digits[20];

	radix = 0;
	i = 0;
	is_negative = 0;
	if (!is_valid_base(base))
		return ;
	while (base[radix] != '\0')
		radix++;
	if (nbr < 0)
	{
		is_negative = 1;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		digits[i++] = base[nbr % radix];
		nbr /= radix;
	}
	while (i-- > 0)
		write (1, &digits[i], 1);
}

// int main(void)
// {
// 	char c[] = {"0123456789ABCDEF"};
// 	char c1[]= {"0123"};
// 	char c2[]= {"01"};
// 	ft_putnbr_base(42, c);
// 	write (1, "\n", 1);
// 	ft_putnbr_base(42, c1);
// 	write (1, "\n", 1);
// 	ft_putnbr_base(42, c2);
// 	write (1, "\n", 1);
// 	return (0);
// }
