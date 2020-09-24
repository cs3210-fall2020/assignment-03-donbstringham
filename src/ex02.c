#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("[ERROR] insufficient arguments\n");
        printf("[HELP] <%s> <input file> <output file>\n", argv[0]);
        return(-1);
    }

    char *i_file = argv[1];
    char *o_file = argv[2];
    int r_in = 0;
    int w_out = 0;

    printf("[INFO] input file: %s\n", i_file);
    printf("[INFO] output file: %s\n", o_file);

    r_in = open(i_file, O_RDONLY);
    w_out = open(o_file, O_WRONLY|O_CREAT);


    while((ch = getc(r_in) != EOF) {
            putc(ch, w_out);
    }

    close(w_out);
    close(r_in);

    printf("[INFO] completed\n");
    return(0);
}



