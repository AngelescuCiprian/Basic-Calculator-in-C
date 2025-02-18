#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch, repeat;
    float a, b;

    do {
        printf("\nEnter A for Addition ");
        printf("\nEnter S for Subtraction ");
        printf("\nEnter M for Multiplication ");
        printf("\nEnter D for Division ");
        printf("\n\tEnter your choice: ");
        scanf(" %c", &ch);

        ch = toupper(ch);

        switch (ch) {
        case 'A':
            printf("\nEnter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("\nThe Addition is: %.2f", a + b);
            break;
        case 'S':
            printf("\nEnter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("\nThe Subtraction is: %.2f", a - b);
            break;
        case 'M':
            printf("\nEnter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("\nThe Multiplication is: %.2f", a * b);
            break;
        case 'D':
            printf("\nEnter two numbers: ");
            scanf("%f %f", &a, &b);
            if (b == 0) {
                printf("\nError: Division by zero is not allowed!");
            }
            else {
                printf("\nThe Division is: %.2f", a / b);
            }
            break;
        default:
            printf("\nInvalid choice! Please enter A, S, M, or D.");
            break;
        }

        printf("\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &repeat);
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
