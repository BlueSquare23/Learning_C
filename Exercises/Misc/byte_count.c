#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Main Idea

 Create a program that accepts a file name as an argument, then opens up that
 file, reads it and counts up all its bytes, and appends the filename and total
 number of bytes to a seperate log file.

*/

int main (int argc, char **argv) {
    char byte_log[] = "bytes.log";
    char *file_path;
    int bytes = 0;

    if (argc <= 1) {
        printf("Usage: log_size /path/to/file\n");
        exit(1);
    }

    file_path = argv[1];
    printf("Input File: %s\n", file_path);

    FILE *fp = fopen(file_path, "r");
    if (fp == NULL) {
        printf("File %s does Not exist!\n", file_path);
        exit(2);
    }

    // Add up bytes.
    for (bytes; fgetc(fp) != EOF; ++bytes);
    fclose(fp);
    printf("Total Bytes: %i\n", bytes);

    // Write to log.
    FILE *fp2 = fopen(byte_log, "a+");
    fprintf(fp, "%s: %i\n", file_path, bytes);
    fclose(fp2);
    printf("Results written to %s\n", byte_log);

    return 0;
}
