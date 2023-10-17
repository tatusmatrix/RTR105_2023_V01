#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main(void)
 {
 int i = 0;
 int gadiijuma_skaitlis, gadiijuma_skaitlju_generatora_grauds;

 gadiijuma_skaitlju_generatora_grauds = time(NULL);
 printf("Gadījuma skaitļu ģeneratora grauds - %d\n",gadiijuma_skaitlju_generatora_grauds);

 srand(gadiijuma_skaitlju_generatora_grauds);


 for( i = i + 1, gadiijuma_skaitlis = rand() ; gadiijuma_skaitlis % 10 ; gadiijuma_skaitlis = rand(), i++)
  {
  printf("%d. skaitlis\n",i);
  printf("Gadījuma skaitlis - %d\n",gadiijuma_skaitlis);
  printf("Šis skaitlis nedalās ar 10 bez atlikuma.\n");
  }

 printf("Ģenerēšanas beigas.\n");
 printf("Beidzot skaitlis %d. iterācijā %d dalās ar 10 bez atlikuma.\n",i,gadiijuma_skaitlis);

 return 0;
 }
