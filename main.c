#include <stdio.h>
#include "operation.h"

int main() {
    int a = 0, b = 0;
    char ch, m;
    int f = 0;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    while (f == 0) {
        printf("\nPress 1-Arithmetic 2-Logical 3-Swap between two number (q to quit): ");
        scanf(" %c", &m);

        if (m == '1') {
            printf("Press 1-Addition 2-Subtraction 3-Multiplication 4-Division 5-Modulo q-Exit: ");
            scanf(" %c", &ch);
            switch (ch) {
                case '1': printf("Result: %d\n", sum(a, b)); break;
                case '2': printf("Result: %d\n", diff(a, b)); break;
                case '3': printf("Result: %d\n", mul(a, b)); break;
                case '4':
                    if (b != 0) printf("Result: %d\n", div(a, b));
                    else printf("Division by zero is not allowed.\n");
                    break;
                case '5':
                    if (b != 0) printf("Result: %d\n", mod(a, b));
                    else printf("Modulo by zero is not allowed.\n");
                    break;
                case 'q': f = 1; break;
                default: printf("Invalid choice.\n"); break;
            }
        } else if (m == '2') {
            printf("Press 1-Logical AND 2-Logical OR 3-Logical NOT 4-Logical XOR q-Exit: ");
            scanf(" %c", &ch);
            switch (ch) {
                case '1': printf("Result: %d\n", logical_and(a, b)); break;
                case '2': printf("Result: %d\n", logical_or(a, b)); break;
                case '3': printf("Result: %d\n", logical_not(a)); break;
                case '4': printf("Result: %d\n", logical_xor(a, b)); break;
                case 'q': f = 1; break;
                default: printf("Invalid choice.\n"); break;
            }
        } else if (m == 'q') {
            f = 1;
        }
        else if(m=='3')
        {
         swap_number(&a,&b);
         printf("Swap between a is %d and b is %d",a,b);
            
        }
        
        else {
            printf("Invalid option.\n");
        }
    }

    printf("Exiting the program.\n");
    return 0;
}