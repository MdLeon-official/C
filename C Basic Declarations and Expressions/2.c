#include <stdio.h>

int main() {
    int version = __STDC_VERSION__;
    if (version >= 201710L){
        printf("We are using C18!\n");
    }
    else if (version >= 201112L){
        printf("We are using C11!\n");
    }
    else if (version >= 199901L){
        printf("We are using C99!\n");
    }

}
