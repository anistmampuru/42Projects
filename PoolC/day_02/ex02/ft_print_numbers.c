/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/09 21:24:43 by angagnie          #+#    #+#             */
/*   Updated: 2015/07/09 21:32:37 by angagnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_print_numbers(void)
{
	char c;

	c = 47;
	while (++c < 58)
		ft_putchar(c);
}
