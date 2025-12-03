#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student getTopper(struct Student s[], int n) {
    int max = 0;
    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[max].marks)
            max = i;
    }
    return s[max];
}

int main() {
    struct Student s[3];
    for(int i = 0; i < 3; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    struct Student top = getTopper(s, 3);

    printf("Top Student: %s | Roll: %d | Marks: %d",
           top.name, top.roll, top.marks);

    return 0;
}
