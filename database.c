#include <stdio.h>

// Define a structure to store student details
struct Student {
    char name[50];
    float subject_marks;
    char grade;
};

int main() {
    // Declare an array of 5 students
    struct Student students[5] = {
        {"Alice", 85.5, 'B'},
        {"Bob", 92.0, 'A'},
        {"Charlie", 76.0, 'C'},
        {"David", 89.0, 'B'},
        {"Eve", 95.5, 'A'}
    };

    // Print student details
    printf("%-10s %-10s %-10s\n", "Name", "Marks", "Grade");
    printf("--------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%-10s %-10.2f %-10c\n", students[i].name, 
students[i].subject_marks, students[i].grade);
    }

    return 0;
}

