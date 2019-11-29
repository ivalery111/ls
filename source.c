#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>



int main(int argc, char **argv)
{
    int c = -1;

    while ((c = getopt(argc, argv, "l")) != -1)
    {
        switch (c)
        {
        case 'l':
            printf("Option l\n");
            break;
        default:
            printf("Default\n");
            break;
        }
    }
}