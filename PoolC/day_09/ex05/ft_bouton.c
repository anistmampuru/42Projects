/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/17 07:05:24 by angagnie          #+#    #+#             */
/*   Updated: 2015/07/17 07:05:28 by angagnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_bouton(int i, int j, int k)
{
	if ((i <= j && j <= k) || (k <= j && j <= i))
		return (j);
	if ((j <= i && i <= k) || (k <= i && i <= j))
		return (i);
	if ((i <= k && k <= j) || (j <= k && k <= i))
		return (k);
	return (0);
}
