
/*
 * Dot product of 2 vectors
 */

 #include <stdio.h>

 int main( void ) {
    float a[]={ 1.0, 1.0, 1.0, 1.0, 1.0 };
    float b[]={ 2.0, 3.0, 4.0, 5.0, 6.0 };
    float d;

    /*
    Code to compute the dot product
    Store your answer in d
    print your final answer
    */

   long int len = length(a);
   printf("a has length %i", len);
   
   for (int i = 0; i < 5; i++)
   {
      d += a[i] * b[i];
   }
   printf("%.2f\n", d);
    return 0;
 }

 int length( float vec[] ) {
      long int len = sizeof(vec)/sizeof(vec[0]);
      printf("%lu\n", sizeof(vec));
      printf("%lu\n", sizeof(vec[0]));
      return len;
 }