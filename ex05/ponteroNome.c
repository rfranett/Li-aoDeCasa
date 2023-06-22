#include <unistd.h>

void escrPtr(char c) {
    write(1, &c, 1);
}

int main(void) {
    char text[] = "Robson";
    char *ptr = text;
    while (*ptr != '\0') {
        escrPtr(*ptr);
        ptr++;
    }
    escrPtr('\n');
    return 0;
}
