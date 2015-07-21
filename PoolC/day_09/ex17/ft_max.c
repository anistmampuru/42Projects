/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/17 13:11:20 by angagnie          #+#    #+#             */
/*   Updated: 2015/07/17 15:15:13 by angagnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(int *tab, int length)
{
	int a;
	int max;

	max = tab[0];
	a = -1;
	while (++a < length)
		if (tab[a] > max)
			max = tab[a];
	return (max);
}
