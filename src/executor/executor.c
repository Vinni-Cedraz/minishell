/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:41:22 by johmatos          #+#    #+#             */
/*   Updated: 2023/06/09 14:32:24 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	executor(t_databus *data, char *prompt)
{
	if (!ft_strncmp(data->stream, "exit\n", 4))
		exit_cmd(data, prompt);
	else if (!ft_strncmp(data->stream, "env\n", 3))
		env_cmd(data->env, data->number_of_envs);
	return ;
}
