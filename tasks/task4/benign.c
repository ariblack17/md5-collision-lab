
#include <stdio.h>

unsigned char x[200] = {
 [0 ... 199] = 0x41
};
unsigned char y[200] = {
 [0 ... 199] = 0x41
};

int main() {

    for (unsigned int i = 0; i < 200; i++) {
        // check if arrays are same

        if (x[i] != y[i]) {
            // execute malicious code
            printf("hehe <3\n");
            break;
        }
        if (i == 199) {
            // execute benign code
            printf("not malicious!\n");
        }

    }

    return 0;
}

// compile cmd: gcc benign.c -o benign.out