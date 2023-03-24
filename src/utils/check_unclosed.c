/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_unclosed.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 21:38:21 by johmatos          #+#    #+#             */
/*   Updated: 2023/03/24 15:50:11 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	check_unclosed_quotes(char *line, char *delimiter)
{
	int		credit;
	char	*range;
	char	*cursor;

	credit = 0;
	cursor = ft_strnstr(line, delimiter, ft_strlen(line));
	if (cursor != NULL)
	{
		credit++;
		cursor++;
		while (*cursor != '\0' || cursor != NULL)
		{
			cursor = ft_strnstr(cursor, delimiter, ft_strlen(cursor));
			if (cursor == NULL)
				break ;
			cursor++;
			credit++;
		}
	}
	if (credit % 2 != 0)
		return (1);
	return (0);
}
