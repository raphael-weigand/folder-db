// Header file for input
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

// Define functions for compiler
void create_database(const char name[50], const char path[256]);

// Creates a file which contains the schema information and returns the path
char[250] create_schema(char database_root_path[250]) {};

struct attribute {
    char name[50];
    char data_type[15];
    // no value? Value is file content
    char file_path[250];
};

struct table {
    char name[50];
    char folder_path[250];
    struct attribute attributes[20];
};

struct database {
    char folder_path[250];
    char schema_path[250];
    struct table tables[];
};

struct database create_database(const char name[50], const char path[255]) {
    if (path
    char path[305] = path + name;
}

/* We need a schema information of the database, not sure how to create it */
char[250] create_schema(char database_root_path[250]) {
    return;
}

// Main function: entry point for execution
int main() {
    char str[] = "Hello World\n";
    return 0;
}

