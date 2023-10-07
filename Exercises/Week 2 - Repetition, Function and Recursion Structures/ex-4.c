#include <stdio.h>

/* Exercise description: 

Implement an algorithm that reads an Operation Code:

1: adds two numbers (a + b);
2: add three numbers (a + b + c);
3: multiplication of two numbers (a * b);
0: exit.
If the user types the EXIT operation (0), the program shows the LEAST result obtained, considering ONLY the operations performed, and TERMINATES. However, if NO Operation Code is selected, the following message must be printed: "No calculations were performed!". Otherwise, it will request the INPUT of numbers (a and b OR a, b and c) and print the result of the operation (addition or multiplication). After this, the program REQUESTS the Operation Code again for the user to enter a NEW OPERATION.

The following tests will be performed:

TEST 01:
Input:
0

Output:
No calculations were performed!

TEST 02:
Input:
1
2
3
0

Output:
(a+b) = 5
Lowest result: 5

TEST 03:
Input:
1
2
3
1
2
1
0

Output:
(a+b) = 5
(a+b) = 3
Lowest result: 3

TEST 04:
Input:
2
2
3
1
0

Output:
(a+b+c) = 6
Lowest result: 6

TEST 05:
Input:
2
2
3
2
2
2
1
5
0

Output:
(a+b+c) = 7
(a+b+c) = 8
Lowest result: 7

TEST 06:
Input:
3
1
2
0

Output:
(a*b) = 2
Lowest result: 2

TEST 07:
Input:
3
1
3
3
2
1
0

Output:
(a*b) = 3
(a*b) = 2
Lowest result: 2

TEST 08:
Input:
1
2
2
2
2
1
3
0

Output:
(a+b) = 4
(a+b+c) = 6
Lowest result: 4

TEST 09:
Input:
1
8
2
2
2
1
3
3
2
10
0

Output:
(a+b) = 10
(a+b+c) = 6
(a*b) = 20
Lowest result: 6

TEST 10:
Input:
2
1
0
3
3
1
1
0

Output:
(a+b+c) = 4
(a*b) = 1
Lowest result: 1

TEST 11:
Input:
3
1
4
2
3
3
1
1
2
6
0

Output:
(a*b) = 4
(a+b+c) = 7
(a+b) = 8
Lowest result: 4

TEST 12:
Input:
3
1
2
2
-1
2
5
1
3
2
1
1
1
3
2
1
0

Output:
(a*b) = 2
(a+b+c) = 6
(a+b) = 5
(a+b) = 2
(a*b) = 2
Lowest result: 2

TEST 13:
Input:
2
-4
-5
5
3
1
2
3
1
1
3
8
0
0

Output:
(a+b+c) = -4
(a*b) = 2
(a*b) = 1
(a*b) = 0
Lowest result: -4 */

int calculator(int operation_code);

int main()
{
    int operation_code = 0, was_it_calculated = 0, result = 0, lowest_result = 0;

    do{
        printf("Enter the operation code:\n");
        scanf("%d", &operation_code);

        if(operation_code != 0){

            result = calculator(operation_code);

            if(was_it_calculated == 0){
                lowest_result = result;
                was_it_calculated = 1;
            }

            lowest_result = result <= lowest_result ? result : lowest_result;
        }

   } while(operation_code != 0);

    if(was_it_calculated == 0){
        printf("No calculations were performed!");
    } else {
        printf("Lowest result: %d", lowest_result);
    }

    return 0;
}

int calculator(int operation_code){
    int result = 0, first_number = 0, second_number = 0, third_number = 0;

    printf("Enter the first number:\n");
    scanf("%d", &first_number);

    printf("Enter the second number:\n");
    scanf("%d", &second_number);

    if(operation_code == 2){
        printf("Enter the third number:\n");
        scanf("%d", &third_number);
    }

    switch (operation_code)
    {
        case 1:
            result = first_number + second_number;
            printf("(a+b) = %d\n", result);
            break;
        case 2:
            result = first_number + second_number + third_number;
            printf("(a+b+c) = %d\n", result);
            break;
        case 3:
            result = first_number * second_number;
            printf("(a*b) = %d\n", result);
            break;
        default:
            break;
    }

    return result;
}