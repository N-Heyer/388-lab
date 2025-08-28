/*
Write a program that will work as a basic calculator that can perform addition, subtraction,
multiplication, division, squaring (for e.g. 32), and cubing (e.g. 33), on user input data for
two operands (or one for squaring and cubing). You can assume all operands will be of
type int. The program should first ask for the operation, then ask for the operands. The
input for type of operation will be a char, and ‘+’ indicates addition, ‘-’ indicates
subtraction, ‘*’ indicates multiplication, ‘/’ indicates division, ‘s’ indicates squaring, and
‘c’ indicates cubing. If the operation is not squaring or cubing, then the program asks for
the second operand and then computes the result. Otherwise, it goes directly to
computing the square or cube. Your program should output a single number as the result
of the operation. An example of one possible run of the program is given below:
*/

#include <stdio.h>

int main()
{
    char op;
    int a,b, result;

    printf("Enter the operation:");
    scanf("%c", &op);

    if (op == 's' || op == 'c'){
        printf("Enter a number:");
        scanf("%d", &a);

        if (op == 's'){
            result = a * a;
            printf("Result: %d\n", result);
        } else {
            result = a * a * a;
            printf("Result: %d\n", result);
        }
    } else {
        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);

        switch(op) 
        {
            case '+':
                result = a + b;
                printf("Result: %d\n", result);
                break;
            case '-':
                result = a - b;
                printf("Result: %d\n", result);
                break;
            case '*':
                result = a * b;
                printf("Result: %d\n", result);
                break;
            case '/':
                if (b != 0) {
                    result = a / b;
                    printf("Result: %d\n", result);
                } else {
                    printf("Error: Cannot divide by 0!! ");
                }
                break;
            default:
                printf("Invalid operation! ");
                break;
        }
    }


return 0;

}