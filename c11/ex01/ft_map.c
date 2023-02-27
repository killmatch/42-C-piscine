/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 04:02:47 by marvin            #+#    #+#             */
/*   Updated: 2023/02/26 15:04:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*a;

	a = (int *)malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		a[i] = f(tab[i]);
		i++;
	}
	return (a);
}
