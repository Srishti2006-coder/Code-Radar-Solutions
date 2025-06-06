// Your code here...
// Your code here...
#include <stdio.h>

// Define the structure
struct student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    int N;
    float total_marks = 0.0, average;

    // Input number of students
    scanf("%d", &N);

    // Array of students
    struct student students[N];

    // Input data
    for (int i = 0; i < N; i++) {
       
        scanf("%d", &students[i].roll_no);

        scanf(" %s", students[i].name); // assumes name has no spaces

        scanf("%f", &students[i].marks);

        total_marks += students[i].marks; // accumulate marks
    }

    // Calculate average
    average = total_marks / N;

    // Display average
    printf("Average Marks: %.2f\n",average);

    return 0;
}