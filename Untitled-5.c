#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compoundInterest, amount;

    // Input values
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    // Compound Interest formula: A = P * (1 + r/100)^t
