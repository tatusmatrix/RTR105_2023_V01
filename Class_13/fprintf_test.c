//https://cplusplus.com/reference/cstdio/fprintf/

#include <stdio.h>
#include <string.h>

int main ()
{
   FILE * pFile;
   int n;
   char name [100];

   pFile = fopen ("myfile.txt","w");

   // uzdevums - pēc lietotāja izvēles atvērt failu papildināšanai vai pārrakstīšanai

   for (n=0 ; n<3 ; n++)
   {
     puts ("please, enter a name: ");
     // gets (name);
     fgets (name,20,stdin);
     // https://stackoverflow.com/questions/2693776/removing-trailing-newline-character-from-fgets-input
     name[strcspn(name, "\n")] = 0;
     //name[strcspn(name, "\n")] = 0;
     fprintf (pFile, "Name %d [%-10.10s]\n",n+1,name);
   }
   fclose (pFile);

   return 0;
}

