/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dyna_trim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 18:17:19 by angagnie          #+#    #+#             */
/*   Updated: 2015/12/06 17:53:31 by angagnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dyna_trim(t_dyna *td)
{
	void	*new_data;

	if (td->chunck_count < td-> chunck_max)
	{
		if (!(new_data = malloc(td->chunk_size * td->chunck_count)))
			return (1);
		ft_memcpy(new_data, td->data, td->chunck_count * td->chunck_size);
		td->chunck_max = td->chunck_count;
		free(td->data);
		td->data = new_data;
	}
	return (0);
}
