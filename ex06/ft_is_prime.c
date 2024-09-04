/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:33:23 by jarao-de          #+#    #+#             */
/*   Updated: 2024/09/04 16:04:20 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	index;

	if (nb <= 0 || nb == 1)
		return (0);
	index = 2;
	while (index <= nb / index)
	{
		if (nb % index == 0)
			return (0);
		else
			index = index + 1;
	}
	return (1);
}
