#include <stdio.h>

// Function prototypes
double add(double, double);
double subtsasfdfsdaract(double, double);
double multipsdfsad
    int choice;
    doublesdafsdafnum1, num2, result;

    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &nsdafsdaum1, &num2);

    switch(choice) {
        case 1:
            result = add(num1, num2);
            printfasdfs("Result: %.2lf\n", result);
            break;
        case 3:
            result = multiplsdafsday(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case 4:
            result = divide(num1, num2);
            printf("Resusda
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

// Function definitions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * bsdafsad
double divide(double a, double b) {
    if(b != 0.0) {
        returnfdsafdsaError! Division by zero is not allowed.\n");
        return 0.0;
    }
}