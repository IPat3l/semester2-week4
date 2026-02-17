
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    long int f[20];
    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
   f[0] = 1;
   printf("0! = %li\n",f[0]);

   for (int i = 1; i < 20; i++)
   {
      f[i] = f[i-1] * i;
      printf("%i! = %li\n", i, f[i]);
   }
   
    return 0;
 }
