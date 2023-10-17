#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main(void)
 {
 int gadiijuma_skaitlis, gadiijuma_skaitlju_generatora_grauds;

 gadiijuma_skaitlju_generatora_grauds = time(NULL);
 printf("Gadījuma skaitļu ģeneratora grauds - %d\n",gadiijuma_skaitlju_generatora_grauds);

 srand(gadiijuma_skaitlju_generatora_grauds);
 gadiijuma_skaitlis = rand();
 printf("Gadījuma skaitlis - %d\n",gadiijuma_skaitlis);

 // "False" - ir tikai skaitliskā nulle
 // "True"  - ir visi pārējie (ja kaut vienā bitā ir 1)

 if( gadiijuma_skaitlis % 10 == 0 ) // tā jūs rakstītu skolā un tas ir normāli
                                    // 101 % 10 -> 1 ... 1 == 0 -> 0
                                    // 100 % 10 -> 0 ... 0 == 0 -> 1
  {
  printf("Šis skaitlis dalās ar 10 bez atlikuma.\n");
  }

 if( gadiijuma_skaitlis % 10 ) // tiek pārbaudīts vai šis skaitlis dalās ar 10 bez atlikuma
                               // 101 % 10 -> 1
                               // 102 % 10 -> 2
                               // 100 % 10 -> 0
  {
  printf("Šis skaitlis nedalās ar 10 bez atlikuma.\n");
  }
 else // NB! else vienmēr pieder kādam if (if bez else var būt, else bez if - nevar)
  {
  printf("Šis skaitlis dalās ar 10 bez atlikuma.\n");
  }

 return 0;
 }
