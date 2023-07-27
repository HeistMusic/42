/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:47:04 by lmarquin          #+#    #+#             */
/*   Updated: 2023/07/26 13:13:07 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	num;

	if (nb == -2147483648)
		write(1, "-2147483648", 15);
	else if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
	}
	if (nb < 10)
	{
		num = nb + '0';
		write(1, &num, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
int	main(void)
{
	ft_putnbr(432);
	return (0);
}

