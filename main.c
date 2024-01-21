#include <stdio.h>

int main(void) {

    char name1[14] = "Lucinda Potter";
    char birthdate1[10] = "6/24/1992";
    char workphone1[12] = "000-000-0101";
    char cellphone1[13] = "000-000-0189";

    printf("%s\n", name1);
    printf("%s\n", birthdate1);
    printf("work %s\n", workphone1);
    printf("cell %s\n\n", cellphone1);


    char name2[14] = "John Smith";
    char birthdate2[10] = "8/15/1978";
    char workphone2[12] = "000-111-0101";
    char cellphone2[12] = "000-111-0189";

    printf("%s\n", name2);
    printf("%s\n", birthdate2);
    printf("work %s\n", workphone2);
    printf("cell %s\n\n", cellphone2);

    char name3[14] = "Chris Johnson";
    char birthdate3[10] = "12/01/1987";
    char workphone3[12] = "000-222-0101";
    char cellphone3[13] = "000-222-0189";

    printf("%s\n", name3);
    printf("%s\n", birthdate3);
    printf("work %s\n", workphone3);
    printf("cell %s\n\n", cellphone3);

    char name4[12] = "Robert Hall";
    char birthdate4[9] = "2/27/1949";
    char workphone4[12] = "000-444-0101";
    char cellphone4[12] = "000-444-0189";

    printf("%s\n", name4);
    printf("%s\n", birthdate4);
    printf("work %s\n", workphone4);
    printf("cell %s\n", cellphone4);

    return 0;
}