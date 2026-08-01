#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float average;

    printf("Enter marks of 5 subjects:\n");

    for(int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    average = total / 5.0;

    printf("\nTotal = %d\n", total);
    printf("Average = %.2f\n", average);

    if(average >= 90)
        printf("Grade: A");
    else if(average >= 75)
        printf("Grade: B");
    else if(average >= 60)
        printf("Grade: C");
    else if(average >= 40)
        printf("Grade: D");
    else
        printf("Grade: F");

    return 0;
}