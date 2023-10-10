#include<stdio.h>

int main(void)
 {
 char c1; // šī ir diskrēta mainīgā deklarēšana - noteikta izmēra atmiņas
          // apgabals (char -> 1 byte) tiks sasaistīts ar noteiktu
          // identifikatoru (c1)
          // atmiņā nav vakuums => šajā rezervētājā atmiņas apgabalā būs
          // kaut kāda 0 un 1 kombinācija, kas ir palikusi pēc kādas
          // iepriekšējās programmas
 printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (simbols): %c\n",c1);
 printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (dec): %d\n",c1);
 printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (hex): %#x\n",c1);
 printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (oct): %#o\n",c1);

 printf("\n");
           // mainīgā "loma" ir - mainīties ...
 c1 = 'A'; // visbiežāk šo izmaiņu veiksim ar NB! piešķiršanas operāciju - =
           // piešķiršanas operācijai ir gandrīz viszēmākā prioritāte
           // (tā tiek izpldīta viena no pēdējām)
           // labajā pusē izrēķinātais lielums (vērtība) tiek izmitināta
           // atmiņas apgabalā, kas ir saistīts ar kreisajā pusē pieminēto
           // identifikatoru
 printf("c1 mainīgā vērtība pēc piešķiršanas operācijas (simbols): %c\n",c1);
 printf("c1 mainīgā vērtība pēc pieškiršanas operācijas (dec): %d\n",c1);
 printf("c1 mainīgā vērtība pēc piešķiršanas operācijas (hex): %#x\n",c1);
 printf("c1 mainīgā vērtība pēc piešķiršanas operācijas (oct): %#o\n",c1);

 printf("\n");
 c1 = 0125;
 printf("c1 mainīgā vērtība pēc piešķiršanas operācijas (simbols): %c\n",c1);
 printf("c1 mainīgā vērtība pēc pieškiršanas operācijas (dec): %d\n",c1);
 printf("c1 mainīgā vērtība pēc piešķiršanas operācijas (hex): %#x\n",c1);
 printf("c1 mainīgā vērtība pēc piešķiršanas operācijas (oct): %#o\n",c1);

 int birth_year = 2000; // šī ir mainīgā definēšana
                        // (atmiņas apgabala sasaistīšana ar identifikatoru
                        // un vērtības piešķiršana)
                        // mainīgo identifikatoriem, jēb vārdiem vēlams
                        // izvēlēties mnemoniskus nosaukumus - nosaukuma
                        // vārds vai teksts atspoguļo nolūku, kuram šis
                        // mainīgais ir paredzēts
                        // identifikators nevar sākties ar ciparu
                        //                      saturēt atstarpi
                        // var saturēt - [A...Za...z][0...9][_]
 printf("\n");
 printf("birth_year mainīgā vērtība (simbols): %c\n",birth_year);
 printf("birth_year mainīgā vērtība (dec): %d\n",birth_year);
 printf("birth_year mainīgā vērtība (hex): %#x\n",birth_year);
 printf("birth_year mainīgā vērtība (oct): %#o\n",birth_year);

 int i1, i2 = 0, i3 = 0x13, i4 = 025;

 int modified_birth_year = birth_year >> 4;
 printf("\n");
 printf("modified_birth_year (simbols): %c\n",modified_birth_year);
 printf("modified_birth_year (dec): %d\n",modified_birth_year);
 printf("modified_birth_year (hex): %#x\n",modified_birth_year);
 printf("modified_birth_year (oct): %#o\n",modified_birth_year);

 // uzdevums līdz 11:00 papētīt citus datu tipus un operācijas no:
 // https://www.geeksforgeeks.org/data-types-in-c/
 // https://en.cppreference.com/w/c/language/operator_precedence
 // +, -, *, /, %, ...

 char c = 10, cc = 127; //cc = 128;
 int i = -4569, ii = 126;
 float f = 3.14e-2, ff = 0.2569;
 /*
 3.140000 VS 1078523331
 3.200000 VS 1078774989
 */
 double d = 4.789e39, dd = -13.56;
 printf("\n");
 printf("c=%d\t\t(piešķirtas atmiņas izmērs baitos - %ld,\n\t\t",c,sizeof(c));
 printf("atrašanas vieta atmiņā - %p)\n",&c);
 printf("cc=%d\t\t(piešķirtas atmiņas izmērs baitos - %ld,\n\t\t",cc,sizeof(cc));
 printf("atrašanas vieta atmiņā - %p)\n",&cc);
 printf("i=%d\t\t(piešķirtas atmiņas izmērs baitos - %ld,\n\t\t",i,sizeof(i));
 printf("atrašanas vieta atmiņā - %p)\n",&i);
 printf("f=%.2e\t(piešķirtas atmiņas izmērs baitos - %ld,\n\t\t",f,sizeof(f));
 printf("atrašanas vieta atmiņā - %p)\n",&f);
 printf("d=%.3e\t(piešķirtas atmiņas izmērs baitos - %ld,\n\t\t",d,sizeof(d));
 printf("atrašanas vieta atmiņā - %p)\n",&d);

 printf("\n");
 int *i_adrese = &i;
 //float *i_adrese = &f;
 printf("i mainīgā adrese - %p\n",i_adrese);
 int *i_adreses_kopija = i_adrese;
 printf("i adreses kopija - %p\n",i_adreses_kopija);
 printf("i mainīgā vērtība, izgūta pielietojot tā adresi - %d\n",*i_adrese);
 //printf("i mainīgā vērtība, izgūta pielietojot tā adresi - %f\n",*i_adrese);
 printf("i mainīgā vērtība, izgūta pielietojot tā adreses kopiju - %d\n",*i_adreses_kopija);

 int **i_adreses_adrese = &i_adrese;
 printf("i adreses adrese - %p\n",i_adreses_adrese);
 printf("i adreses adreses izmērs baitos - %ld\n",sizeof(i_adreses_adrese));

 printf("\n/ operācijas pētīšana:\n");
 printf("char/char = ? - ");
 printf("%d / %d = %d (rezultāta izmērs baitos - %ld)\n",cc,c,cc/c,sizeof(cc/c));
 
 char a = 4, b = 5, ab;// c; NB! nedrīkst pārdefinēt c!!!
 ab = a >= b;
 printf("\n");
 printf("%d >= %d\nrezultāts: %d (rezultāta izmērs baitos - %ld)",a,b,a>=b,sizeof(a>=b));
 printf("\nrezultāts no atmiņas: %d\n",ab);


 a = 5, b = 5;
 ab = a >= b;
 printf("\n");
 printf("%d >= %d\nrezultāts: %d (rezultāta izmērs baitos - %ld)",a,b,a>=b,sizeof(a>=b));
 printf("\nrezultāts no atmiņas: %d\n",ab);
 printf("rezultāts no atmiņas: %d\n",(char)ab);

 printf("Cienījamais lietotāj, lūdzu, ievadi vienu simbolu: ");
 scanf(" %c", &c);
 printf("Cienījamais lietotāj, Tu esi ievadījis %c simbolu.\n",c);

 return 0;
 }
