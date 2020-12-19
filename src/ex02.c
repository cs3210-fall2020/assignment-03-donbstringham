#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("[ERROR] insufficient arguments\n");
        printf("[HELP] <%s> <input file> <output file>\n", argv[0]);
        exit(-1);
    }

    FILE *fpin;
    FILE *fpout;

    printf("[INFO] input file: %s\n", argv[1]);
    printf("[INFO] output file: %s\n", argv[2]);

    fpin = fopen(argv[1], "rb");
    fpout = fopen(argv[2], "wb");
    char ch;

    while ((ch = fgetc(fpin)) != EOF) {
        fputc(ch, fpout);
    }

    fclose(fpout);
    fclose(fpin);

    printf("[INFO] completed\n");
    exit(0);
}

