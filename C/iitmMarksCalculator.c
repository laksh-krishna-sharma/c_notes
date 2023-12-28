#include <stdio.h>

double max(double a, double b) {
    return (a > b) ? a : b;
}

double calculateExpression(double aa, double f, double q1, double q2) {
    return 0.1 * aa + max(0.6 * f + 0.2 * max(q1, q2), 0.4 * f + 0.2 * q1 + 0.3 * q2);
}

int main() {
    double aa, f, q1, q2;

    // Input values
    printf("Enter value for aa: ");
    scanf("%lf", &aa);

    printf("Enter value for f: ");
    scanf("%lf", &f);

    printf("Enter value for q1: ");
    scanf("%lf", &q1);

    printf("Enter value for q2: ");
    scanf("%lf", &q2);

    // Calculate and print the result
    double result = calculateExpression(aa, f, q1, q2);
    printf("Result: %lf\n", result);

    return 0;
}