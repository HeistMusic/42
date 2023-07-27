/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:51:45 by luis-rod          #+#    #+#             */
/*   Updated: 2023/07/09 13:36:25 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	imprimir(int x, int y, int b, int h);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	b;
	int	h;

	b = 1;
	h = 1;
	while ((h <= y) && (x > 0))
	{
		while (b <= x)
		{
			imprimir(x, y, b, h);
			b++;
		}
		b = 1;
		ft_putchar('\n');
		h++;
	}
}

void	imprimir(int x, int y, int b, int h)
{
	char	c;

	if ((b == 1 && h == 1) || (b == x && h == y))
	{
		c = '/';
	}
	else if ((b == 1 && h == y) || (x == b && h == 1))
	{
		c = '\\';
	}
	else if ((h == 1 || b == 1) || (b == x && h != y))
	{
		c = '*';
	}		
	else if (h == y && b != 1 && b != x)
	{
		c = '*';
	}
	else
	{
		c = ' ';
	}
	ft_putchar(c);
}
