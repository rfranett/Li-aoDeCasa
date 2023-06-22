#include <unistd.h>

void loop(char c) {
    write(1, &c, 1);
}

int main(void) {
    char text[] = "Robson";
    int c = 0;
    while (text[c] != '\0') {
        loop(text[c]);
        c++;
    }
    loop('\n');
    return 0;
}
