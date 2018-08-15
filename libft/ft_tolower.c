/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstorcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 04:33:55 by mstorcha          #+#    #+#             */
/*   Updated: 2017/08/01 19:01:52 by mstorcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int s)
{
	if (s >= 'A' && s <= 'Z')
		s = s + 32;
	return (s);
}
