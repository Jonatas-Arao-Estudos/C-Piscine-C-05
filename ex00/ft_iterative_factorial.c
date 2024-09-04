/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:38:13 by jarao-de          #+#    #+#             */
/*   Updated: 2024/09/04 14:11:15 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	index;
	int	factorial;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	index = nb - 1;
	factorial = nb;
	while (index > 1)
	{
		factorial = factorial * index;
		index = index - 1;
	}
	return (factorial);
}
