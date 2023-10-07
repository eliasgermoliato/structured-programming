#include <stdio.h>

/* Exercise description:

Implement an algorithm to calculate and compare the area of ​​two rectangles A and B. 
Before calculating the area, the algorithm must check whether the input data (base and height) represent a rectangle (and not a square).
If the answer is positive, you must check which rectangle has the largest area or whether they are equal in size.

It is worth noting that the input data (of type float) must follow the following order:

Base of rectangle A;
Height of rectangle A;
Base of rectangle B;
Height of rectangle B.

Therefore, for INPUTS:

10.5
10.5
5.0
10.4

You must print (OUTPUT):

The data entered does not form rectangle A or rectangle B!

In the case of INPUTS:

5.3
10.1
5.4
5.4

The OUTPUT will be:

The data entered does not form rectangle A or rectangle B!

For ENTRIES:

20.1
30.2
10.3
4.1

The following messages will be printed (OUTPUT):

The area of ​​rectangle A is: 607.020020
The area of ​​rectangle B is: 42.230000
The area of ​​rectangle A is greater than that of rectangle B!
THE ENTRIES:

10.2
2.1
30.2
10.4

The result (OUTPUT) should be:

The area of ​​rectangle A is: 21.419998
The area of ​​rectangle B is: 314.079987
The area of ​​rectangle B is greater than that of rectangle A!
Finally, for the following INPUTS:

10.1
5.2
10.1
5.2

The OUTPUT will be:

The area of ​​rectangle A is: 52.520000
The area of ​​rectangle B is: 52.520000
The area of ​​rectangle A is the same as that of rectangle B!

*/

int main()
{
    float a_base = 0, a_height = 0, a_area = 0, b_base = 0, b_height = 0, b_area = 0;

    printf("Enter the base of rectangle A: \n");
    scanf("%f", &a_base);
    printf("Enter the height of rectangle A: \n");
    scanf("%f", &a_height);

    printf("Enter the base of rectangle B: \n");
    scanf("%f", &b_base);
    printf("Enter the height of rectangle B: \n");
    scanf("%f", &b_height);

    if((a_base == a_height) || (b_base == b_height)){
        printf("The data entered does not form rectangle A or rectangle B!");
    } else {  
        a_area = a_base * a_height;
        b_area = b_base * b_height;

        printf("The area of rectangle A is: %f\n", a_area);
        printf("The area of rectangle B is: %f\n", b_area);

        if(a_area > b_area){
            printf("The area of rectangle A is greater thant that of rectangle B!");
        } else if(b_area > a_area){
            printf("The area of ​​rectangle B is greater than that of rectangle A!");
        } else {
            printf("The area of rectangle A is the same as that of rectangle B!");
        }
    }

    return 0;
}