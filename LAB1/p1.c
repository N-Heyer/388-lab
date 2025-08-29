
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