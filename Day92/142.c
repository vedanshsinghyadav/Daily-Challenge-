#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[5];

    for(int i = 0; i < 5; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    printf("Name\tRoll\tMarks\n");
    for(int i = 0; i < 5; i++) {
        printf("%s\t%d\t%d\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
