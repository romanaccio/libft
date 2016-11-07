/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:55:14 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/07 17:40:54 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
	{
		i++;
	}
	return (i);
}