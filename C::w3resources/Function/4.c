#include <stdio.h>
#include <sys/types.h>

int number(int n1);

int main() {
    int n1;
    scanf("%d", &n1);
    if (number(n1)){
        printf("EVEN");
    }else{
        printf("ODD");
    }
}

int number(int n1) {
    if (n1 % 2 == 0) {
        return 1;
    }else {
        return 0;
    }
}
