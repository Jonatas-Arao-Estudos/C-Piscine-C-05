/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:54:16 by jarao-de          #+#    #+#             */
/*   Updated: 2024/09/04 14:00:31 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	factorial = nb * ft_recursive_factorial(nb - 1);
	return (factorial);
}
