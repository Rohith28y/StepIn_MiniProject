#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void addition()
{
    printf("Enter the numbers you want to add: ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("The sum of %d and %d is %d\n", a, b, a + b);
}
void subtraction()
{
    printf("Enter the numbers you want to subtract: ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("The difference of %d and %d is %d\n", a, b, a - b);
}
void multiplication()
{
    printf("Enter the numbers you want to multiply: ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("The product of %d and %d is %d\n", a, b, a * b);
}
void division()
{
    printf("Enter the numbers you want to divide: ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("The division of %d and %d is %f\n", a, b, (float)a / (float)b);
}
void modulus()
{
    printf("Enter the numbers you want to find modulus of: ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("The modulus of %d and %d is %d\n", a, b, a % b);
}
int fact(int n)
{
    if(n <= 1) return 1;
    return n * fact(n - 1);
}
void factorial()
{
    int n;
    printf("Enter the number you want the factorial of: ");
    scanf("%d", &n);
    long long int factorial = fact(n);
    printf("\nFactorial of %d is %d", n, factorial);
}
int p(int x, int n)
{
    if(n == 0) return 1;
    int temp = p(x, n / 2) * p(x, n / 2);
    return (n % 2 != 0) ? (temp * x) : (temp);
}
void power()
{
    int x;
    int n;
    printf("Enter the base and the power: ");
    scanf("%d%d", &x, &n);
    int ans = p(x, n);
    printf("The power is %d", ans);
}


void square()
{
    int n;
    printf("Enter the number you want the square of: ");
    scanf("%d", &n);
    int ans = p(n, 2);
    printf("The square of %d is %d", n, ans);
}
void cube()
{
    int n;
    printf("Enter the number you want the cube of: ");
    scanf("%d", &n);
    int ans = p(n, 3);
    printf("The cube of %d is %d", n, ans);
}
void squareroot()
{
    int b;
    printf("Enter the number you want the square root of : ");
    scanf("%d", &b);
    int s = sqrt(b);
    printf("The square root of %d is %d", b, s);
}
void  logrithim()
{
    double n;
    printf("Enter a number to calculate its natural logarithm (base = e)\n");
    scanf("%lf", &n);
    double ans =log(n);
    printf("The log of %.2lf = %lf\n", n, ans);
}

int main()
{
    printf("\t\tWelcome to the Scientific Calculator!!\n");
    printf("\t\t-------------------------------------\n\n");

    int c;

    printf("(** Press 0 to quit the program ** )\n");

    printf("\n\nNumber 1 -> 5 are Arthimetic Operators: \n");
    printf(" \n");
    printf("Enter 1 for Addition \n");
    printf("Enter 2 for Subtraction \n");
    printf("Enter 3 for Multiplication \n");
    printf("Enter 4 for Division \n");
    printf("Enter 5 for Modulus\n");
    printf(" \n");
    printf("Numbers 6 -> 10 are Other Operators: \n");
    printf(" \n");
    printf("Enter 6 for Power \n");
    printf("Enter 7 for Factorial \n");
    printf("Enter 8 for square \n");
    printf("Enter 9 for Cube \n");
    printf("Enter 10 for Squareroot\n");
    printf(" \n");
    printf("Number 11 is Logrithimic Operator: \n");
    printf(" \n");
    printf("Enter 11 for Logarithim\n");
    printf("-------------------------------------------- ");

    while (1)
    {
        printf("\nEnter the operation you want to do: ");

        scanf("%d", &c);

        switch (c)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            modulus();
            break;
        case 6:
            power();
            break;
        case 7:
            factorial();
            break;
        case 8:
            square();
            break;
        case 9:
            cube();
            break;
        case 10:
            squareroot();
            break;
        case 11:
            logrithim();
            break;
        case 0:
            exit(0);
        default:
            printf("\nInvalid operation!!!!\n");
        }
    }
    return 0;
}
