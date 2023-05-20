/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_quotes_handler.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:03:27 by lfilipe-          #+#    #+#             */
/*   Updated: 2023/05/18 20:54:35 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "minishell.h"

char	*single_quotes_handler(char *line,int *acc)
{
	char	*str;
	int		idx;
	char	*cursor;

	idx = 0;
	cursor = ++line;
	while (cursor[idx] != '\'')
		idx++;
	str = ft_substr(line, 0, cursor - line);
	*acc += idx;
	return (str);
}