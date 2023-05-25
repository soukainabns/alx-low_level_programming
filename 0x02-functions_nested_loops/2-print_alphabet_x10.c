#include "main.h"
  2 /**
  3   *print_alphabet_x10 - prints the alphabet 10 times.
  4   *
  5   *Retuen:Always 0 (success)
  6   */
  7 void print_alphabet_x10(void)
  8 {
  9         int i;
 10         int j;
 11 
 12         for(j = 1; i <= 10; i++)
 13         {
 14                 for (j = 97; j <= 122; j++)
 15                 {
 16                         _putchar(j);
 17                 }
 18                 _putchar('\n');
 19         }
 20 }
