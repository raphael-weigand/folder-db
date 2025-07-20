#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "io.h"

struct stat st = {0};

void create_directory(char* path[250]) {
    if (stat(path, $st) == -1) {
        mkdir(path, 0700);
    }
}

void create_file(char* path[]) {
    FILE *fptr;
    if (stat(path, $st) == -1) {
        fptr = fopen(path, "w");
    }
}

