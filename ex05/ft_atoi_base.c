/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 09:36:59 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/22 23:58:53 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_atoi_base(char *str, char *base)
// {
// 	int base_len = 0;
// 	while (base[base_len] != '\0')
// 	{
//         if((str[i] > 9 && str[i] <= 13) || str[i] == 32
// 		|| (str[i] == 43 || str[i] == 45))
// 			return 0;
// 		for (int i = base_len + 1; base[i] != '\0'; i++)
// 		{
// 			if (base[base_len] == base[i])
// 				return 0;
//         }
// 		base_len++;
// 	}
// 	if (base_len < 2)
// 		return 0;
// 	int sign = 1;
// 	if (*str == '-')
// 	{
// 		sign = -1;
// 		str++;
// 	}
// 	else if (*str == '+')
// 		str++;
// 	int result = 0;
// 	while (*str != '\0')
// 	{
// 		int digit = -1;
// 		for (int i = 0; i < base_len; i++)
// 		{
// 			if (*str == base[i])
// 			{
// 				digit = i;
// 				break;
// 			}
// 		}
// 		if (digit == -1)
// 			break ;
// 		result = (result * base_len) + digit;
// 		str++;
// 	}
// 	return (sign * result);
// }

// // #include <stdio.h>
// // int main(void)
// // {
// // 	char *base[] = "0123456789abcdef";
// // 	char *str[] = {"42"};
// // 	int a;
// // 	printf("%d",ft_atoi_base(str, base));
// // 	return(0);
// // }