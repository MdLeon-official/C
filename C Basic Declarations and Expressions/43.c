#include <stdio.h>

int main() {
    int p, q, counter=1;
    printf("P: ");
    scanf("%d", &p);
    printf("Q: ");
    scanf("%d", &q);

    for(int i=0; i<p; i++) {
        for(int j=0; j<q; j++) {
            printf("%d ", counter++);
        }
        printf("\n");
    }

    return 0;
}
