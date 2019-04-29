//Endianness
#include <stdio.h>
int main() 
{
   unsigned int i = 1;
   char *c = (char*)&i;
   if (*c)    
       printf("Little endian");
   else
       printf("Big endian");
   getchar();
   return 0;
}

/*
How address can be given to above memory area . .
  __________________________________________________________________
  |        |         |        |        |         |        |    1   |
  -------------------------------------------------------------------

        _______________________________________________
1.     |      |    |     |      |     |      |    1   |
        -----------------------------------------------      0 at 1000 : MSB at lower address ( Big endian  )
       1000   1004  1008  1012   1016   1020    1024
        ___________________________________________
 2.     |     |     |     |    |     |      |   1  |       1 at lower address : LSB at lower address ( little endian)
        --------------------------------------------
        1024  1020  1016   1012  1008  1004   1000

in program we are just checking first byte of memory address.
*/
