/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:27:08 by jarao-de          #+#    #+#             */
/*   Updated: 2024/09/04 14:48:28 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	gold_num;

	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	gold_num = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (gold_num);
}
