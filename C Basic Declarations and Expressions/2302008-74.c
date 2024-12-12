#include <stdio.h>
int main() {
    int line = 0;
    char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    for (int i = 0; i<52; i++){
        line++;
        printf("%d ",alphabet[i]);
        if(line == 6){
            printf("\n");
            line = 0;
        }
    }
}
