/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:11:42 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/22 09:35:36 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		write(1, (str + i), 1);
		i++;
	}
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "123456ABCDEF";
// 	//char str1[] = {'c', 'b', 'a'};
// 	ft_putstr(str);
// 	//ft_putstr(str1);
// 	return (0);
// }