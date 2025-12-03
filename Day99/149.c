#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *s = (struct Student*) malloc(sizeof(struct Student));

    scanf("%s %d %d", s->name, &s->roll, &s->marks);

    printf("Name: %s | Roll: %d | Marks: %d", s->name, s->roll, s->marks);

    free(s);
    return 0;
}
