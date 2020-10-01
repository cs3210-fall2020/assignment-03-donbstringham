#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("[ERROR] insufficient arguments\n");
        printf("[HELP] <%s> <input file>\n", argv[0]);
        exit(-1);
    }

    char *in_file = argv[1];
    char ch;
    FILE *fpin;

    printf("[INFO] input file: %s\n", in_file);
    printf("[INFO] output:\n");

    fpin = fopen(in_file, "r");

    fseek(fpin, 0, SEEK_SET);

    while ((ch = fgetc(fpin) != EOF)) {
        putchar(ch);
    }

    fclose(fpin);

    printf("[INFO] completed\n");
    exit(0);
}
