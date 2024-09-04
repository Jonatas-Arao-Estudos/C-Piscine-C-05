/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:13:58 by jarao-de          #+#    #+#             */
/*   Updated: 2024/09/04 14:25:46 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	powered;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	powered = nb * ft_recursive_power(nb, power - 1);
	return (powered);
}
