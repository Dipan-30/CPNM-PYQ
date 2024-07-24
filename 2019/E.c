//very Hard 
#include <stdio.h>
#include <stdlib.h>

// Function to get the month name from the month number
const char* get_month_name(int month) {
    const char* months[] = {
        "Invalid", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    if (month < 1 || month > 12) {
        return "Invalid";
    }
    return months[month];
}

// Function to check the validity of the date
int is_valid_date(int day, int month, int year) {
    if (month < 1 || month > 12) {
        return 0;
    }
    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (day < 1 || day > days_in_month[month - 1]) {
        return 0;
    }
    return 1;
}

int main() {
    char date[11];
    int day, month, year;

    printf("Enter a date (dd/mm/yyyy): ");
    fgets(date, sizeof(date), stdin);

    // Parse the date string
    if (sscanf(date, "%d/%d/%d", &day, &month, &year) != 3) {
        printf("Invalid date format.\n");
        return 1;
    }

    // Check the validity of the date
    if (!is_valid_date(day, month, year)) {
        printf("Invalid date.\n");
        return 1;
    }

    // Print the date in "month-date-year" format
    printf("%s-%d-%d\n", get_month_name(month), day, year);

    return 0;
}
