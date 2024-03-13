#include <stdio.h>

int main() {
    printf("\x1b[32m------------------------------\n");
    printf("           NOTA LEGAL         \n");
    printf("------------------------------\x1b[0m\n");
    printf("ITEM\t\t\tQTD\tVALOR         \n");
    printf("%s\t\t%3.3i un\tR$ %3.2f\n", "Banana nanica", 5, 15.99);
    printf("%s\t\t%3.3i un\tR$ %3.2f\n", "Maçã fuji", 9, 5.99);
    printf("%s\t\t%3.3i un\tR$ %3.2f\n", "Uva globo", 12, 8.99);
    printf("\x1b[34m------------------------------\n");
    printf("TOTAL................\t\tR$ %3.2f\n\x1b[0m", 26.00);

    return 0;
}