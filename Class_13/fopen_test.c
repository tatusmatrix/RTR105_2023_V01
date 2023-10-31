// https://cplusplus.com/reference/cstdio/fopen/

#include <stdio.h>
#include <stdlib.h>
int main ()
{
  FILE * pFile;
  pFile = fopen ("myfile.txt","w");
  // pFile = fopen ("/myfile.txt","w"); //to have an error at open
                                        //tries to open file in root directory

  // uzdevums - faila nosaukumu (un, varbūt, adresi) noskaidrot no lietotāja

  if (pFile!=NULL)
  {
    fputs ("fopen example, test output to file\n",pFile);
    fclose (pFile);
  }
  else
  {
    printf("fopen example, file wasn't open\n");
    exit(1);
  }
  return 0;
}
