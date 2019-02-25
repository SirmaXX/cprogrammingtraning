#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test(char x[60],int y,FILE*z){
	   if(fgets(x, y, z)!=NULL ) {    
         puts(x);    
       }
       fclose(z); 
    }
    
 void checkfile(FILE*z){
     if(z == NULL) {
	  printf( "dosya bulunamadı:");
     }
      fclose(z);
  }
    
int main(int argc, char *argv[])
{
int i;
FILE *fp;
char str[60];

    printf("dosyaların listesi: \n ");
    for( i=1; i<argc; i++)
    {
		 printf("%s\n", argv[i]);
         fp = fopen( argv[i] , "r");
  checkfile(fp);
 test(str, 60, fp);
 
     }
    return 0;
} 


