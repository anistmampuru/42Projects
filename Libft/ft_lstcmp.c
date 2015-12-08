/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstequ_rec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 13:58:47 by angagnie          #+#    #+#             */
/*   Updated: 2015/12/08 14:10:24 by angagnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_lstequ_rec(t_list *a, t_list *b, int (*equ)(void *, void *))
{
	if (a == NULL && b == NULL)
		return (1);
	if (a == NULL || b == NULL)
		return (0);
	return(equ(a->content, b->content)
		   && ft_lstequ(a->next, b->next, equ));
}