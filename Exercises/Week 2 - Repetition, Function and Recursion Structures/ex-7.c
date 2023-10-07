#include <stdio.h>

/* Exercise description: 

Write a program that reads a positive integer N and then prints N lines of the so-called Floyd triangle.
For example, for N=6, the following triangle is formed:

1...
2...3...
4...5...6...
7...8...9...10..
11..12..13..14..15..
16..17..18..19..20..21..

The following tests will be performed:

TEST 01:
Input:
6

Output:
1...
2...3...
4...5...6...
7...8...9...10..
11..12..13..14..15..
16..17..18..19..20..21..

TEST 02:
Input:
3

Output:
1...
2...3...
4...5...6...

TEST 03:
Input:
10

Output:
1...
2...3...
4...5...6...
7...8...9...10..
11..12..13..14..15..
16..17..18..19 20..21..
22..23..24..25..26..27..28..
29..30..31..32..33..34..35..36..
37..38..39..40..41..42..43..44..45..
46..47..48..49..50..51..52..53..54..55.. */

#include <stdio.h>
#include <stdlib.h>

void floyd_triangle(int floyd_triangle_number);

int main()
{
    int floyd_triangle_number = 1;

    printf("Enter an integer to display Floyd's triangle:\n");
    scanf("%d", &floyd_triangle_number);

    floyd_triangle(floyd_triangle_number);
}

void floyd_triangle(int floyd_triangle_number){
    int count_row = 0, count_column = 0, number_displayed = 1;

    while(count_row < floyd_triangle_number){
        for(count_column = 0; count_column <= count_row; count_column = count_column + 1){
            printf("%d...", number_displayed);

            number_displayed = number_displayed + 1;
        }
        printf("\n");

        count_row = count_row+1;
    }
}