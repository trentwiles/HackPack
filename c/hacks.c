#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main( ) {

   char pass;
   char realpass = 2;
   int breakwhile = 1;
   int i = 0;
   int friend;
  
   printf( "Government Database. DO NOT ATTEMPT TO HACK/BYPASS THIS DATABASE");
   printf( " " );
   printf( "Enter your password :");
   pass = getchar( );
   printf("Thank you. You have logged in.");
   printf("Entering the database...")
   ;while(breakwhile < 30000) {
     printf("aW4gZXhhbXBsZW9r");
     printf("aW4gd2VsY29tZQ");
     printf("aW4gcm9ibG94Y29vbA");
    breakwhile = breakwhile + 1; 
    sleep(10000);                        
   }
   breakwhile = 0;
   printf( "\n " );
   printf( "\n " );
   printf( "\n " );
   printf("\n Entered."); /* Below this line you should add your friends name and stuff. */
   printf( "\n Enter the name of the person who you would like to view:");
   friend = getchar( );
   printf( "\n Scanning records for the user you requested.");
   for (i=1 ; i<100000000 ; i++);
   printf( "\n Test");
  
   return 0;
}