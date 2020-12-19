#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

#define DIRECTORY "./"

int main(int argc, char **argv)
{

    DIR *ds;

    ds = opendir(DIRECTORY);
    if (ds == NULL)
    {
        printf("[ERROR] cannot open %s", DIRECTORY);
        return (-1);
    }

    struct dirent *file_in_dir;

    printf("[INFO] output: \n");
    while ((file_in_dir = readdir(ds)) != NULL)
    {
        if (argc == 2 && (strcmp(argv[1], "-l") == 0))
        {
            printf("%s\n", file_in_dir->d_name);
        }
        else
        {
            printf("%s ", file_in_dir->d_name);
        }
    }

    closedir(ds);

    printf("\n[INFO] completed\n");
    return (0);
}
