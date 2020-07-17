/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unnemuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:57:49 by unnemuta          #+#    #+#             */
/*   Updated: 2020/07/17 09:53:51 by unnemuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{	
	int checker;
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		checker = 0;
		while(str[i+checker] == to_find[checker])
		{
			checker++;
			if(to_find[checker] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return 0;
}
