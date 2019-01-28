/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhourba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 20:20:49 by akhourba          #+#    #+#             */
/*   Updated: 2018/10/11 18:26:08 by akhourba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		is_space(char *str)
{
	if (*str == ' ' || *str == '\t' || (*str >= 9 && *str <= 13))
		return (1);
	return (0);
}

int				ft_atoi(const char *str)
{
	int res;
	int signe;
	int temp;

	temp = 0;
	res = 0;
	signe = 1;
	while (is_space((char *)str))
		str++;
	if (*str == '+' && (*(str + 1) >= '0' && *(str + 1) <= '9'))
		str++;
	if (*str == '-')
	{
		signe = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		temp = res;
		res = (res * 10) + (int)*str - '0';
		str++;
	}
	return (signe * res);
}
