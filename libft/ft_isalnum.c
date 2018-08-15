/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstorcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 23:54:08 by mstorcha          #+#    #+#             */
/*   Updated: 2017/11/24 13:55:37 by mstorcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
			|| ((c >= 65 && c <= 90)
			|| (c >= 97 && c <= 122)))
		return (1);
	else
		return (0);
}