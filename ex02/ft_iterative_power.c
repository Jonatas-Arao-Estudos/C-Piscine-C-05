/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:01:38 by jarao-de          #+#    #+#             */
/*   Updated: 2024/09/04 14:21:47 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	index;
	int	powered;

	if (power < 0)
		return (0);
	index = 0;
	powered = 1;
	while (index < power)
	{
		powered = powered * nb;
		index = index + 1;
	}
	return (powered);
}
