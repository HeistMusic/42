/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:59:10 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/20 17:00:15 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	calcular_signo(int num_signo_menos, char *str, int *i)
{
	while (str[*i] != '\0' && (str[*i] == '+' || str[*i] == '-'))
	{
		if (str[*i] == '-')
			num_signo_menos += 1;
		*i = *i + 1;
	}
	return (num_signo_menos);
}

int	ft_atoi(char *str)
{
	int	signo;
	int	result;
	int	i;
	int	num_signo_menos;

	i = 0;
	result = 0;
	signo = 1;
	num_signo_menos = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (calcular_signo(num_signo_menos, str, &i) % 2 != 0)
		signo = -1;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}	
	return (result * signo);
}
/*
int	main(int argc, char **argv)
{
	int	resultado;

	resultado = 0;
	if (argc == 2)
	{
		resultado = ft_atoi(argv[1]);
		printf("%d", resultado);
	}
	else
	{
		write(1, "ERROR\n", 6);
	}
	return (0);
}
*/
