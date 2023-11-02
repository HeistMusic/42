/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:50:22 by lmarquin          #+#    #+#             */
/*   Updated: 2023/07/18 17:46:53 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	tamanio;

	tamanio = 0;
	while (str[tamanio] != '\0')
	{
		tamanio++;
	}
	write(1, str, tamanio);
}
/*
int main(void)
{
	char array[] = "hola que tal";
	ft_putstr(array);
	return (0);

}
*/
