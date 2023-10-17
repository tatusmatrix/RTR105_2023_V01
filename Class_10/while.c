#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main(void)
 {
 int i=0;
 int gadiijuma_skaitlis, gadiijuma_skaitlju_generatora_grauds;

 gadiijuma_skaitlju_generatora_grauds = time(NULL);
 printf("Gadījuma skaitļu ģeneratora grauds - %d\n",gadiijuma_skaitlju_generatora_grauds);

 srand(gadiijuma_skaitlju_generatora_grauds);

 i = i + 1; // NB! darbības (operācijas) netiek pildītas vienlaicīgi
            // šeit ir divas operācijas (saskaitīšana - + un piešķiršana - =)
            // sakitīšana ir prioritārā - tā tiks izpildīta pirmā
            // i++; inkrements (skaitļa piegums par vienu vienību)
            // ++i;
            // i += 1;
 gadiijuma_skaitlis = rand();

 while( gadiijuma_skaitlis % 10 )
  {
  printf("%d. skaitlis\n",i);
  printf("Gadījuma skaitlis - %d\n",gadiijuma_skaitlis);
  printf("Šis skaitlis nedalās ar 10 bez atlikuma.\n");
  gadiijuma_skaitlis = rand(); // bez šis rindiņas dabūsim bezgalīgu ciklu
  i++;
  }

 printf("Ģenerēšanas beigas.\n");
 printf("Beidzot skaitlis %d. iterācijā %d dalās ar 10 bez atlikuma.\n",i,gadiijuma_skaitlis);

 return 0;
 }
