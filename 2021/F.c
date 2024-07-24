#include <stdio.h>

// Define constants as const variables
const int MAX_STUDENTS = 10;
const int NUM_SUBJECTS = 6;

// Define the structure for a student
struct student {
    char name[40];
    int roll;
    int marks[NUM_SUBJECTS];
    int total; // To store total marks
};

// Function to calculate total marks for a student
void calculate_total(struct student *s) {
    s->total = 0;
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        s->total += s->marks[i];
    }
}

// Function to sort students by total marks in descending order
void sort_students(struct student students[], int n) {
    struct student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].total < students[j].total) {
                // Swap students[i] and students[j]
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

// Function to get the length of a string
int string_length(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to remove newline character if present
void remove_newline(char *str) {
    int length = string_length(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }
}

int main() {
    int num_students;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    getchar(); // To consume the newline character after number input

    if (num_students > MAX_STUDENTS) {
        printf("Maximum number of students supported is %d\n", MAX_STUDENTS);
        return 1;
    }

    struct student students[MAX_STUDENTS]; // Declare an array of students

    // Input student data
    for (int i = 0; i < num_students; i++) {
        printf("Enter name for student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        // Remove newline character if present
        remove_newline(students[i].name);

        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].roll);
        getchar(); // To consume the newline character after number input

        printf("Enter marks for %d subjects for student %d:\n", NUM_SUBJECTS, i + 1);
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
        getchar(); // To consume the newline character after marks input

        // Calculate total marks
        calculate_total(&students[i]);
    }

    // Sort students by total marks in descending order
    sort_students(students, num_students);

    // Print merit list
    printf("\nMerit List:\n");
    for (int i = 0; i < num_students; i++) {
        printf("Student %d: Roll Number: %d, Name: %s, Total Marks: %d\n",
               i + 1, students[i].roll, students[i].name, students[i].total);
    }

    return 0;
}
