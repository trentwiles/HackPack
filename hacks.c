#include <stdio.h>
int main( ) {

   char pass;
   char realpass = "ok";
  
   printf( "Government Database. DO NOT ATTEMPT TO HACK/BYPASS THIS DATABASE");
   printf( " " );
   printf( "Enter your password :");
   pass = getchar( );
   printf("Thank you. You have logged in.");
   return 0;
}