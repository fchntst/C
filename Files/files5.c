/*

#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;
    char c;
    int i;

    fp = fopen("files_psounis_1.txt", "r");
    if(fp == NULL)
    {
        printf("Unable to lock memory!");
        exit(0);
    }

    for(i=0; i<5; i++)
        printf("%c", fgetc(fp));
    printf("\n");

    rewind(fp);

    while((c = fgetc(fp) != EOF))
        printf("%c", c);

    fclose(fp);
}

*/

#include <stdio.h>
#include <stdlib.h>

main() {
   FILE *fp;
   char c;
   int i;
	
   fp = fopen("files_psounis_1.txt","r");
   if (fp==NULL) {
      printf("Lathos sto anoigma tou arxeiou");
      exit(0);
   }

   printf("\npos: %d\n", ftell(fp));

   for (i=0; i<5; i++)
   	  printf("%c",fgetc(fp));
   
   printf("\npos: %d\n", ftell(fp));
   
   rewind(fp);
   
   printf("\npos: %d\n", ftell(fp));

   while ((c=fgetc(fp))!=EOF)
      printf("%c", c);
	
   printf("\npos: %d\n", ftell(fp));
	
   fclose(fp);
}