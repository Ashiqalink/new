#include <stdio.h>
#include <string.h>
#define max_stds 100

typedef struct {
    char name[50];
    int rollno;
    int mark1, mark2, mark3;
    int total;
    float percentage;
} student;

void bubblesort(student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].percentage < arr[j + 1].percentage) {
                student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    student students[max_stds];

    printf("\nEnter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter the details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll no.: ");
        scanf("%d", &students[i].rollno);
        printf("Mark1: ");
        scanf("%d", &students[i].mark1);
        printf("Mark2: ");
        scanf("%d", &students[i].mark2);
        printf("Mark3: ");
        scanf("%d", &students[i].mark3);

        students[i].total = students[i].mark1 + students[i].mark2 + students[i].mark3;
        students[i].percentage = (float)students[i].total / 3;
    }

    bubblesort(students, n);

    printf("\nRank List\n");
    printf("Rank\tName\t	Roll No\tTotal\tPercentage\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t    	%d\t%d\t\t%.2f\t%%\n", i + 1, students[i].name, students[i].rollno, students[i].total, students[i].percentage);
    }

    return 0;
}