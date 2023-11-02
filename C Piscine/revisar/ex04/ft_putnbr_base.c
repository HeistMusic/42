/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_basee.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:47:29 by lmarquin          #+#    #+#             */
/*   Updated: 2023/07/20 16:57:15 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		base_len;

	base_len = check_base(base);
	if (base_len >= 2)
	{
		nb = nbr;
		if (nbr < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= base_len)
			ft_putnbr_base(nb / base_len, base);
		ft_putchar(base[nb % base_len]);
	}
}
/*
int main(void)
{
	int nbr;
	char base[33];

	printf("Introduce un numero: ");
	scanf("%d", &nbr);

	printf("Introduce una base: ");
	scanf("%s", base);

	ft_putnbr_base(nbr, base);

	return 0;
}
*/
