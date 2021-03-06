/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unnemuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 09:55:52 by unnemuta          #+#    #+#             */
/*   Updated: 2020/07/17 11:10:38 by unnemuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int	u;
	u = 0;
	while(s1[u] != '\0' && s2[u] != '\0')
	{
		if(s1[u] != s2[u])
		{
			return (s1[u] - s2[u]);;
		}
		u++;
	}
	return (s1[u] - s2[u]);
}
