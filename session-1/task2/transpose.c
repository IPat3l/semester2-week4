
/*
 * Transpose of a matrix
 */

 #include <stdio.h>

 int main( void ) {
    int a[4][4];

    /*
    Intialise the matrix a to 2i-j.
    Print out matrix a. 
    Write code for the transpose - you can use other variables as necessary but not a cpoy of the matrix 
    Print the transpose.
    */
   printf("a = \n[");
   for (int i = 0; i < 4; i++)
   {
      for (int j = 0; j < 4; j++)
      {
         a[i][j] = 2*i-j;

         if (j == 3)
         {printf("%i", a[i][j]);}
         else
         {printf("%i, ", a[i][j]);}
      }  
      if (i == 3)
      {printf("]\n");}
      else
      {printf("\n");}
   }

   printf("\na^T = \n[");
   int swap;
   for (int i = 0; i < 3; i++)
   {
      for (int j = i+1; j < 4; j++)
      {
         swap = a[i][j];
         a[i][j] = a[j][i];
         a[j][i] = swap;
      }
   }

   for (int i = 0; i < 4; i++)
   {
      for (int j = 0; j < 4; j++)
      {
         if (j == 3)
         {printf("%i", a[i][j]);}
         else
         {printf("%i, ", a[i][j]);}
      }  
      if (i == 3)
      {printf("]\n");}
      else
      {printf("\n");}
   }
    return 0;
 }
