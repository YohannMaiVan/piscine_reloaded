/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:37:19 by yomai-va          #+#    #+#             */
/*   Updated: 2018/11/09 18:18:03 by yomai-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			nb++;
		i++;
	}
	return (nb);
}
