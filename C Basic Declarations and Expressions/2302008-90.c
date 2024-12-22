
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int n) {
    int reversed = 0;
    int original = n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int x, y;

    printf("Input two numbers (separated by a space):\n");
    scanf("%d %d", &x, &y);

    if (x < 5 || y > 1000000000 || x >= y) {
        printf("Invalid input range\n");
        return 1;
    }

    printf("List of prime palindromes:\n");

    for (int i = x; i <= y; i++) {
        if (isPalindrome(i) && isPrime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
