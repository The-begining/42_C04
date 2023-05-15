/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:00:31 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/22 23:40:43 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] && str[i] == 32)
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	char arg[] = {"  ---+--+1234ab567"};
// 	char arg1[] = {"42"};
// 	char arg2[] = {" -9876"};
// 	char arg3[] = {"foo123"};
//  	printf("%d\t",ft_atoi(arg));
// 	printf("%d\n",atoi(arg));
// 	printf("%d\t",ft_atoi(arg1));
// 	printf("%d\n",atoi(arg1));
// 	printf("%d\t",ft_atoi(arg2));
// 	printf("%d\n",atoi(arg2));
// 	printf("%d\t",ft_atoi(arg3));
// 	printf("%d\n",atoi(arg3));
// 	return(0);
// }
