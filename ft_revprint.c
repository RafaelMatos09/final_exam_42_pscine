/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 20:27:56 by rafmorei          #+#    #+#             */
/*   Updated: 2023/08/18 20:43:38 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

void ft_revstr(char *str)
{
    int i;

    i = ft_strlen(str);
    i--;
    while (str[i] >= 0)
    {
        ft_putchar(str[i]);
        i--;
    }
}
int main(void)
{
    ft_revstr("djmael");
    write(1, "\n", 1);
    return (0);
}