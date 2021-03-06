/*
** size_and.c for corewar in /home/auzou_t/CPE_2014_corewar/corewar/set_size
** 
** Made by Thibaud Auzou
** Login   <auzou_t@epitech.net>
** 
** Started on  Sat Dec 13 18:05:01 2014 Thibaud Auzou
** Last update Sun Dec 14 21:43:12 2014 Thibaud Auzou
*/

#include <stdlib.h>
#include "op.h"
#include "init.h"

void			size_and(char *inst, int ct, int *res)
{
  unsigned char	my_char;

  my_char = inst[ct + 1];
  res[4] = 1;
  if ((my_char >> 6) == 1)
    res[2] = 1;
  else if ((my_char >> 6) == 3)
    res[2] = 2;
  else
    res[2] = 4;
  my_char = my_char << 2;
  if ((my_char  >> 6) == 1)
    res[3] = 1;
  else  if ((my_char  >> 6) == 3)
    res[3] = 2;
  else
    res[3] = 4;
  return ;
}
