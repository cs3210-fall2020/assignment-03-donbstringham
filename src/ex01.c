#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("[ERROR] insufficient arguments\n");
        printf("[HELP] <%s> <input file> <output file>\n", argv[0]);
        exit(-1);
    }

    int  buf_size = 5000;
    char *i_file = argv[1];
    char *o_file = argv[2];
    char buf[buf_size];
    FILE *in;
    FILE *out;

    for(int i=0;i < buf_size;i++) {
        buf[i] = ' ';
    }

    printf("[INFO] input file: %s\n", i_file);
    printf("[INFO] output file: %s\n", o_file);

    in = fopen(i_file, "rb");
    out = fopen(o_file, "wb");

    do {
        size_t cnt = fread(&buf, sizeof(char), buf_size, in);
        size_t ret = fwrite(&buf, sizeof(char), cnt, out);

        if (ret != cnt) {
            printf("[ERROR] read/write error\n");
            printf("[HELP] number of char read from %s not the same as %s", i_file, o_file);
            exit(1);
        }
    } while(feof(in) == 0);

    fclose(out);
    fclose(in);

    printf("[INFO] completed\n");
    exit(0);
}



