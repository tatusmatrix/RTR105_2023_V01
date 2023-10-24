// https://riptutorial.com/c/example/3250/calling-a-function-from-another-c-file
#include "foo_V2.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    int id_main = 42;
    printf("id_main atrašanas vieta atmiņā (izdruka no main): %p\n",&id_main);
    printf("id_main vērtība pirms foo funkcijas ispildes: %d\n\n",id_main);

    char *name_main = "mans teksts";

    foo(&id_main, name_main);

    printf("\nid_main vērtība pēc foo funkcijas ispildes: %d\n",id_main);
    printf("name_main vērtība pēc foo funkcijas ispildes: %s\n",name_main);

    return 0;
}
