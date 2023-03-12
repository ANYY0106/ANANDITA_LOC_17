 #include <stdio.h>

int main() {
    int number1 , number2 , operation , solution;
    
    printf("Enter number1: ");
    scanf("%d", &number1);
    printf("Enter number2: "); 
    scanf("%d", &number2);
    //enter "1" to get solution of all the arithmatic operations
    printf("Enter operation:\n");
    printf("1. Addition\n");
    printf("2. substraction\n");
    printf("3. multiplication\n");
    printf("4. division\n");
    printf("5. reminder\n");
    scanf("%d", &operation);
     switch(operation) {
     case 1:
    solution = number1 + number2;
    printf(" solution of the addition : %d\n", solution);
    case 2:
    solution = number1 - number2;
    printf("solution of the subtraction : %d\n", solution);
    case 3:
    solution = number1 * number2;
    printf("solution of the multiplication : %d\n", solution);
    case 4:
    solution = number1 / number2;
    printf("solution of the division : %d\n", solution);

    case 5:
    solution = number1 % number2;        
    printf(" solution of the remainder : %d\n", solution);
    break;
    default:
    printf("invalid input.\n");
            
    }
    
    return 0;
}
      