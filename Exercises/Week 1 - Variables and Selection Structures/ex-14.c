#include <stdio.h>
#include <stdbool.h>

/* Exercise description:

implement an algorithm that reads the HEIGHT in meters, the WEIGHT in kilograms, calculates the BMI and REPORTS the INDEX CLASSIFICATION. 
It is worth noting that BMI is calculated using the following formula:

BMI = Weight/(Height * Height)

Additionally, the INDEX CLASSIFICATION is defined using the following criteria:

BMI <= 18.5 = Below normal

BMI >= 18.6 && BMI <= 24.9 = Normal

BMI >= 25.0 && BMI <= 29.9 = Overweight

BMI >= 30.0 && BMI <= 34.9 = Grade I Obesity

BMI >= 35.0 && BMI <= 39.9 = Grade II Obesity

BMI >= 40.0 = Grade III Obesity

Examples:

For ENTRIES:

1.59
45.4

The following OUTPUTS must be shown:

Your BMI is: 17.96
The classification is: Below Normal!

For ENTRIES:

1.79
78.8

The program must present the following OUTPUTS:

Your BMI is: 24.59
The classification is: Normal!

For ENTRIES:

1.65
80

The algorithm should show as OUTPUTS:

Your BMI is: 29.38
The classification is: Overweight!

For ENTRIES:

1.55
80

The program must present as OUTPUT:

Your BMI is: 33.30
The classification is: Obesity Grade I!

For ENTRIES:

1.63
102.3

The program must present as OUTPUT:

Your BMI is: 38.50
The classification is: Obesity Grade II!

For ENTRIES:

1.82
147.6

The program must present as OUTPUT:

Your BMI is: 44.56
The classification is: Obesity Grade III!
*/

bool isValidMeasure(float measure);

float calculateBMI(float weight, float height);

bool isGradeThreeObesity(float bmi);
bool isGradeTwoObesity(float bmi);
bool isGradeOneObesity(float bmi);
bool isOverweight(float bmi);
bool isNormal(float bmi);
bool isBelowNormal(float bmi);


int main()
{
    float weight = 0, height = 0, bmi = 0;

    printf("Enter the height:\n");
    scanf("%f", &height);

    printf("Enter the weight:\n");
    scanf("%f", &weight);

    if(!isValidMeasure(weight) || !isValidMeasure(height)){
        printf("Invalid weight or height!");
    } else {
        bmi = calculateBMI(weight, height);

        printf("Your BMI is: %.2f\n", bmi);

        if(isBelowNormal(bmi)){
            printf("The classification is: Below Normal!");
        } else if(isNormal(bmi)){
            printf("The classification is: Normal!");
        } else if(isOverweight(bmi)){
            printf("The classification is: Overweight!");
        } else if(isGradeOneObesity(bmi)){
            printf("The classification is: Obesity Grade I!");
        } else if(isGradeTwoObesity(bmi)){
            printf("The classification is: Obesity Grade II!");
        } else if(isGradeThreeObesity(bmi)){
            printf("The classification is: Obesity Grade III!");
        }
    }

    return 0;
}

bool isValidMeasure(float measure){
    return measure > 0;
}

float calculateBMI(float weight, float height){
    return weight/(height * height);
}

bool isGradeThreeObesity(float bmi){
    return bmi >= 40.0;
}

bool isGradeTwoObesity(float bmi){
    return bmi >= 35.0 && bmi <= 39.9;
}

bool isGradeOneObesity(float bmi){
    return bmi >= 30.0 && bmi <= 34.9;
}

bool isOverweight(float bmi){
    return bmi >= 25.0 && bmi <= 29.9;
}

bool isNormal(float bmi){
    return bmi >= 18.6 && bmi <= 24.9;
}

bool isBelowNormal(float bmi){
    return bmi <= 18.5;
}
