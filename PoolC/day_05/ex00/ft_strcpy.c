/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/14 12:04:15 by angagnie          #+#    #+#             */
/*   Updated: 2015/07/14 12:19:57 by angagnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int k;

	k = -1;
	while (src[++k])
		dest[k] = src[k];
	dest[k] = 0;
	return (dest);
}
