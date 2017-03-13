/*
** ldi_size.c for corewar in /home/auzou_t/CPE_2014_corewar
** 
** Made by Thibaud Auzou
** Login   <auzou_t@epitech.net>
** 
** Started on  Wed Dec 10 12:49:33 2014 Thibaud Auzou
** Last update Wed Dec 10 18:18:57 2014 Thibaud Auzou
*/

#include <stdlib.h>
#include "lib.h"
#include "op.h"
#include "asm.h"

void		ldi_size(t_param *p)
{
  if (p != NULL)
    {
      if (p->param[0] == 'r')
	p->param_size = 1;
      else
	p->param_size = 2;
      ldi_size(p->next);
    }
}
