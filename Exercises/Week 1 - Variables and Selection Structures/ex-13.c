#include <stdio.h>
#include <stdbool.h>

/* Exercise description:

Implement an algorithm that reads 3 sides (float) of a triangle and reports whether the triangle is equilateral, isosceles or scalene. 
If one of the sides of the triangle is negative or equal to zero, the algorithm must report "INVALID input!".

For example, for INPUTS:

-3.5
two
5

The program must present as OUTPUT:

Invalid Input!

For ENTRIES:

5.5
5.5
5.5

The program must present as OUTPUT:

Equilateral triangle!

For ENTRIES:

4
two
two

The program must present as OUTPUT:

ISOSCELES triangle!

For ENTRIES:

10.3
5
two

The program must present as OUTPUT:

SCALENE triangle!

For ENTRIES:

4
4
0

The program must present as OUTPUT:

Invalid Input!
*/

bool isValidSide(float side);
bool isEquilateralTriangle(float first_side, float second_side, float third_side);
bool isIsoscelesTriangle(float first_side, float second_side, float third_side);
bool isScaleneTriangle(float first_side, float second_side, float third_side);

int main()
{
    float first_side = 0, second_side = 0, third_side = 0;

    printf("Enter the first side of the triangle:\n");
    scanf("%f", &first_side);

    printf("Enter the second side of the triangle:\n");
    scanf("%f", &second_side);

    printf("Enter the third side of the triangle:\n");
    scanf("%f", &third_side);

    if(!isValidSide(first_side) || !isValidSide(second_side) || !isValidSide(third_side)){
        printf("Invalid Input!");
    } else {
        if(isEquilateralTriangle(first_side, second_side, third_side)){
            printf("Equilateral triangle!");
        } else if(isIsoscelesTriangle(first_side, second_side, third_side)){
            printf("Isosceles triangle!");
        } else if(isScaleneTriangle(first_side, second_side, third_side)){
            printf("Scalene triangle!");
        }
    }

    return 0;
}

bool isValidSide(float side){
    return side > 0;
}

bool isEquilateralTriangle(float first_side, float second_side, float third_side){
     if((first_side == second_side) &&  (first_side == third_side)){
        return true;
    }

    return false;
}

bool isIsoscelesTriangle(float first_side, float second_side, float third_side){
     if((first_side == second_side) ||  (first_side == third_side) ||  (second_side == third_side)){
        return true;
    }

    return false;
}

bool isScaleneTriangle(float first_side, float second_side, float third_side){
    if((first_side != second_side) &&  (first_side != third_side) &&  (second_side != third_side)){
        return true;
    }

    return false;
}

