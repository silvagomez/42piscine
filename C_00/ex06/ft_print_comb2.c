/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:50:49 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/02/27 09:04:35 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_four_nbrs(unsigned int a, unsigned int b)
{
	unsigned int		num1;
	unsigned int		num2;
	unsigned int		num3;
	unsigned int		num4;

	num1 = (a / 10);
	num2 = (a % 10);
	ft_putchar(num1 + 48);
	ft_putchar(num2 + 48);
	ft_putchar(' ');
	num3 = (b / 10);
	num4 = (b % 10);
	ft_putchar(num3 + 48);
	ft_putchar(num4 + 48);
}

void	ft_print_comb2(void)
{
	unsigned int	num1;
	unsigned int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_print_four_nbrs(num1, num2);
			if (num1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			num2++;
		}
		num1++;
	}	
}
