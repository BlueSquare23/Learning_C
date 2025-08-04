#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LENGTH 16

/* Implements Basic One-Time Pad */
int main(int argc, char *argv[]) {

    if (argc < 3) {
        printf("Usage: %s <msg> <pad>\n", argv[0]);
        return 1;
    }

    size_t msg_len = strlen(argv[1]);
    size_t pad_len = strlen(argv[2]);

    if (msg_len != pad_len) {
        printf("Pad length must match message length!\n");
        return 2;
    }

//    for (int i = 0; i < argc; ++i) {
//        printf("argv[%d]: %s\n", i, argv[i]);
//    }

    char xor[LENGTH];

    for (int i = 0; i < pad_len; i++) {
        xor[i] = (char)(argv[1][i] ^ argv[2][i]);
        printf("%c ⊕  %c = %02X (%c)\n", argv[1][i], argv[2][i], xor[i], xor[i]);
    }

    printf("Base64 Encoded: ");
    fflush(stdout);

    // Base64 encode it by writing to a temporary file and using base64 util.
    FILE *tmp = fopen("xortmp", "wb");
    if (tmp) {
        fwrite(xor, 1, pad_len, tmp);
        fclose(tmp);
        
        // Base64 encode the file
        system("base64 xortmp");
        
        // Remove the temporary file
        remove("xortmp");
    } else {
        perror("Failed to create temporary file");
        return 3;
    }
    
    return 0;
}


