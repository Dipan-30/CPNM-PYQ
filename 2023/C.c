#include <stdio.h>

struct student {
    char name[40];
    int roll;
    int marks[3];
};

// Function to calculate the total marks for a student
int calculate_total_marks(struct student s) {
    int total = 0;
    for (int i = 0; i < 3; i++) {  // 3 subjects
        total += s.marks[i];
    }
    return total;
}

int main() {
    const int num_students = 10; // Number of students
    const int num_subjects = 3;  // Number of subjects

    struct student students[num_students];
    int highest_total = -1;
    int highest_index = 0;

    // Input student data
    for (int i = 0; i < num_students; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf(" %[^\n]", students[i].name);  // Read the full line including spaces
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].roll);
        
        printf("Enter marks for %d subjects for student %d:\n", num_subjects, i + 1);
        for (int j = 0; j < num_subjects; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }

        // Calculate total marks and update highest
        int total = calculate_total_marks(students[i]);
        if (total > highest_total) {
            highest_total = total;
            highest_index = i;
        }
    }

    // Print the student with the highest aggregate marks
    printf("Student with the highest aggregate marks:\n");
    printf("Name: %s\n", students[highest_index].name);
    printf("Roll Number: %d\n", students[highest_index].roll);

    return 0;
}
