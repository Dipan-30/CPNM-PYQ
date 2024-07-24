#include <stdio.h>

int main() {
    int students = 5;
    int subjects = 5;
    int roll_numbers[5];
    int marks[5][5];
    char names[5][50]; // To store the names of the students
    int i, j;
    int min_marks[5];
    int min_index[5];

    // Input names, roll numbers, and marks for each student
    for (i = 0; i < students; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &roll_numbers[i]);
        printf("Enter marks for student %d in %d subjects: ", i + 1, subjects);
        for (j = 0; j < subjects; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    // Initialize min_marks and min_index with the first student's data
    for (j = 0; j < subjects; j++) {
        min_marks[j] = marks[0][j];
        min_index[j] = 0;
    }

    // Find the student with the lowest marks in each subject
    for (j = 0; j < subjects; j++) {
        for (i = 1; i < students; i++) {
            if (marks[i][j] < min_marks[j]) {
                min_marks[j] = marks[i][j];
                min_index[j] = i;
            }
        }
    }

    // Display the name of the student with the lowest marks in each subject
    for (j = 0; j < subjects; j++) {
        printf("Student %s (Roll Number %d) obtained the lowest marks in subject %d with %d marks.\n", 
               names[min_index[j]], roll_numbers[min_index[j]], j + 1, min_marks[j]);
    }

    return 0;
}
