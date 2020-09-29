#include <dirent.h>
#include <stdio.h>
#include <sys/types.h> 
#include <unistd.h>

#define DIRECTORY "./"

int main(int argc, char **argv) {

    DIR *ds;

    ds = opendir(DIRECTORY); 
    if (ds == NULL) {
        printf("[ERROR] cannot open %s", DIRECTORY);
        return(-1);
    }

    struct dirent *file_in_dir;
    while ((file_in_dir = readdir(ds)) != NULL) {
        printf("[INFO] %s\n", file_in_dir->d_name);
    }

    closedir(ds);

    printf("[INFO] completed\n");
    return(0);
}
