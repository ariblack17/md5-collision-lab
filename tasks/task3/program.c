#include <stdio.h>




unsigned char xyz[200] = {
/* The actual contents of this array are up to you */
 [0 ... 199] = 0x41
};

int main() {

    int i;
    for (i=0; i<200; i++) {

        xyz[i] = 0x41;

        // print the 200-character array
        printf("%x", xyz[i]);
    }

    printf("\n");
}

// compile cmd: gcc program.c -o program.out
