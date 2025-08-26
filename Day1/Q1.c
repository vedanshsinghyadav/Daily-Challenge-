#include  <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter your first number; ");
    scanf("%d", &n1);
    printf("Enter your second number: ");
    scanf("%d", &n2);

    printf("The sum of %d and %d is %d\n", n1, n2, n1 + n2);

    return 0;
}