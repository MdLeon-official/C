#include <stdio.h>

int main()
{
    int pwd;

    while(1) {
        printf("Input the password: ");
        scanf("%d", &pwd);

        if(pwd == 1234) {
            printf("Correct password\n");
            break;
        }
        else {
            printf("Incorrect password\n");
        }
    }

    return 0;
}
