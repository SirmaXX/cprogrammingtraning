#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
int i;
FILE *fp;
char str[60];
int k;

    printf("dosyaların listesi: \n ");
    for(i=1; i<argc; i++)
    {
		 printf("%s\n", argv[i]);
         fp = fopen( argv[i] , "r");
   if(fp == NULL) {
	   printf( "dosya bulunamamaktadır oluşturmak istermisiniz Y(evet),N(hayır) \n:");
       scanf("%s %d", str, &k);
           if(strcmp(str,"Y")==0) {  
            
               fp = fopen(argv[i], "w+");
               fprintf(fp, "deneme...\n");
               fputs("deneme...\n", fp);
                  printf("dosyayı oluşturdu");
            }else{
	          perror("Error opening file");
              return(-1);
	        }
      }
    if(fgets(str, 60, fp)!=NULL ) {
     
      puts(str);
    }
     fclose(fp);
     }
    return 0;
} 
