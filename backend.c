#include <stdio.h>
#include <stdlib.h>
#include <process.h>
#include <string.h>
#include <C:\TDM-GCC-32\json\json.h>
void  main()
 {

   /* json declartaions */
   FILE *fp;
   char buffer[1024];
   struct json_object *parsed_json;
   struct json_object *name;
   struct json_object *email;
   /* json declarations */
   /*  VAriable required */
   int nof; /* Number of jason files to be created */
   char fbase[30]; /* File base name to be created */
   char json[30]="contacts";
   char con[30];
   int i=0;
   /* Getting Folder Name to create the folder to store json files */
   char folder[30];
   char folder2[30]="mkdir ";
   printf("Please Enter the folder name to store json file :");
   gets(folder);
   strcat(folder2,folder);
   system(folder2);
   /* Folder created to store the json file */
   /* getting Number of files to be created */
   printf(" No. of jason files to be created :");
   scanf("%d",&nof);
      /* ----------------------------------*/
   for(i=1;i<=nof;i++)
   { 
      strcpy(json,"contacts");
      strcpy(con,"");
     itoa(i,con,10);
     strcat(json,con);
     fp = fopen(json,"w");
     fclose(fp);
            
}
}