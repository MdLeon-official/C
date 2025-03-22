#include <stdio.h>

struct Time {
    int h;
    int m;
    int s;
};

int main() {
    struct Time t1, t2, r;

    printf("Time 1 (h m s): ");
    scanf("%d %d %d", &t1.h, &t1.m, &t1.s);

    printf("Time 2 (h m s): ");
    scanf("%d %d %d", &t2.h, &t2.m, &t2.s);

    r.s = t1.s + t2.s;
    r.m = t1.m + t2.m + r.s / 60;
    r.h = t1.h + t2.h + r.m / 60;

    r.m %= 60;
    r.s %= 60;

    printf("\nSum: %d:%d:%d\n", r.h, r.m, r.s);

    return 0;
}
