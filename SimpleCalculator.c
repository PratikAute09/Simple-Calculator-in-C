#include <stdio.h>

// Function prototypes
void printMenu();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main()
{
    int choice;
    double num1, num2, result;

    printf("Welcome to the Simple Calculator!\n");

    do
    {
        printMenu();
        printf("Enter your choice (1-4), or 0 to exit: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }

        if (choice < 1 || choice > 4)
        {
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (choice)
        {
        case 1:
            result = add(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case 4:
            if (num2 != 0)
            {
                result = divide(num1, num2);
                printf("Result: %.2lf\n", result);
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        }
    } while (1);

    return 0;
}

// Function to display the menu
void printMenu()
{
    printf("\nSimple Calculator Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
}

// Function to add two numbers
double add(double a, double b)
{
    return a + b;
}

// Function to subtract two numbers
double subtract(double a, double b)
{
    return a - b;
}

// Function to multiply two numbers
double multiply(double a, double b)
{
    return a * b;
}

// Function to divide two numbers
double divide(double a, double b)
{
    return a / b;
}
