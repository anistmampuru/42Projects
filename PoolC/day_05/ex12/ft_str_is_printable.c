/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 16:08:27 by angagnie          #+#    #+#             */
/*   Updated: 2015/07/15 16:11:00 by angagnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	if (!*str)
		return (1);
	if (*str >= '!' && *str <= '~')
		return (ft_str_is_printable(str + sizeof(char)));
	return (0);
}
