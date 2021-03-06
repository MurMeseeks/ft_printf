/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshanaha <lshanaha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 19:22:20 by lshanaha          #+#    #+#             */
/*   Updated: 2019/01/14 17:38:09 by lshanaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (new == NULL || alst == NULL)
		return ;
	if (alst == NULL || *alst == NULL)
	{
		new->next = NULL;
		*alst = new;
	}
	else
	{
		new->next = *alst;
		*alst = new;
	}
	return ;
}
