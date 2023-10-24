// https://riptutorial.com/c/example/3250/calling-a-function-from-another-c-file
#include "foo_V1.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    int id_main = 42;
    printf("id_main atrašanas vieta atmiņā (izdruka no main): %p\n",&id_main);
    printf("id_main vērtība pirms foo funkcijas ispildes: %d\n",id_main);

    //char *name_main = "mans teksts"; //uztaisa norādi uz NB! konstantu simbolu rindu atmiņā, kuras (teksta) vērtību nevar izmainīt
    //https://stackoverflow.com/questions/30533439/string-literals-vs-array-of-char-when-initializing-a-pointer
    char name_main[] = "mans teksts";
    printf("name_main atrašanas vieta atmiņā (izdruka no main): %p\n",name_main);
    printf("name_main vērtība pirms foo funkcijas ispildes: %s\n\n",name_main);
    //name_main = "Mans teksts"; // tā tas nestrādā jebkurā gadījumā
    name_main[0] = 65; // izsauc core dump ja bija char *name_main = "mans teksts";

    // simbolu rindu kopēšana - tiaki jauzmanās, ka destination tiešām VAR mainīt
    //char *new_name_main = "jauns teksts";
    //strcpy(name_main,new_name_main);
    //strncpy(name_main,new_name_main,5);
    //memcpy(name_main,new_name_main,strlen(new_name_main)+1);

    foo(id_main, name_main);

    printf("\nid_main vērtība pēc foo funkcijas ispildes: %d\n",id_main);
    printf("name_main vērtība pēc foo funkcijas ispildes: %s\n",name_main);

    return 0;
}
