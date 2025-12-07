/*c project on a student marks management system that lets you enter the matrks
 for a few students and then calculates and display their average*/
#include <stdio.h>
struct Student {
    char name[50];
    int marks[3];
};

int main() {
    struct Student students[3];
    int i, j;

    for(i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", students[i].name);

        printf("Enter 3 subject marks for %s: ", students[i].name);
        for(j = 0; j < 3; j++) {
            scanf("%d", &students[i].marks[j]);
        }
    }

    printf("\nStudent Average Marks:\n");
    for(i = 0; i < 3; i++) {
        int sum = 0;
        for(j = 0; j < 3; j++) {
            sum += students[i].marks[j];
        }
        float avg = sum / 3.0;
        printf("%s: %.2f\n", students[i].name, avg);
    }

    return 0;
}
