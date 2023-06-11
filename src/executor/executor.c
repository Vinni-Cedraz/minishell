/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:41:22 by johmatos          #+#    #+#             */
/*   Updated: 2023/06/10 17:48:50 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	executor(t_databus *data)
{
	if (!ft_strncmp(data->stream, "exit", 5))
		exit_cmd(data);
	else if (!ft_strncmp(data->stream, "env", 4))
		env_cmd(data->env, data->number_of_envs);
	else if (!ft_strncmp(data->stream, "export ", 7))
		export_cmd(data, &data->stream[7]);
	return ;
}
