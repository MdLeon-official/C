#include <stdio.h>
#include <string.h>

struct Student {
    char name[10];
    int age;
    int mark;
};
int main() {
    struct Student s1;
    strcpy(s1.name, "Luffy");
    s1.age = 21;
    s1.mark = 534;
    printf("This is %s. Age %d and Total mark is %d/1000\n", s1.name, s1.age, s1.mark);
    struct Student s2;
    strcpy(s2.name, "Sanji");
    s2.age = 23;
    s2.mark = 985;
    printf("This is %s. Age %d and Total mark is %d/1000\n", s2.name, s2.age, s2.mark);
}
