#include <stdio.h>
int main( ) {

   char pass;
   char realpass = "ok";
  
   printf( "Government Database. DO NOT ATTEMPT TO HACK/BYPASS THIS DATABASE");
   printf( " " );
   printf( "Enter your password :");
   pass = getchar( );
   if(pass == realpass){
     printf("Thank you. You have logged in.");
   } else{
   printf( "\nYou entered: ");
   putchar( pass );
   }
   return 0;
}
