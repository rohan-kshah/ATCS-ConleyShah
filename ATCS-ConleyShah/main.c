// DONE read in the file
// DONE check file path if valid on operating system
// parse file and throw away invalid characters
//check if array is valid
 // if valid: execute code
 // else: return specific error type




#include "stdio.h"
#include "stdlib.h"
#include "string.h"


int main () {
   char c;
   int n = 0;
  
   FILE *fp fp = fopen("file.txt","r");
   if(fp == NULL) {
      perror("Error in opening file");
      return(-1);
   } do {
      c = fgetc(fp);
      if(feof(fp) ) {
         break;
      }
//TODO: append c into an array if valid character. if invalid, do nothing

   } while(1);

   fclose(fp);
   return(0);
}