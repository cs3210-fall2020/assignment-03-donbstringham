#include <stdio.h>
#include <stdlib.h>

#define OFFSET 0

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("[ERROR] insufficient arguments\n");
        printf("[HELP] <%s> <input file>\n", argv[0]);
        exit(-1);
    }

    FILE *fpin;

    printf("[INFO] input file: %s\n", argv[1]);

    fpin = fopen(argv[1], "rb");

    fseek(fpin, OFFSET, SEEK_END);

    long file_size = ftell(fpin);

    fclose(fpin);

    printf("[INFO] %s is %ld bytes\n", argv[1], file_size);
    printf("[INFO] completed\n");
    exit(0);
}

