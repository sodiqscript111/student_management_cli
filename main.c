#include <stdio.h>

struct Student {
   char name[50];
   int age;
   float grade;
};

struct Student Students[100];
int studentCount = 0;

void Add_new_student() {
    struct Student NewStudent;
    printf("Enter name: ");
    scanf("%49s", NewStudent.name);

    printf("Enter Age: ");
    scanf("%d", &NewStudent.age);

    printf("Enter grade: ");
    scanf("%f", &NewStudent.grade);

    Students[studentCount] = NewStudent;
    studentCount++;
}

void Print_all_student() {
    for (int i = 0; i < studentCount; i++) {
        printf("%d. %s is %d years old and has a grade of %.2f\n",
               i + 1,
               Students[i].name,
               Students[i].age,
               Students[i].grade);
    }
}

int main() {
    while (1) {
        printf("\n1. Add new student\n");
        printf("2. Print all students\n");
        printf("3. Exit\n");
        printf("Choose an option: ");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Add_new_student();
                break;
            case 2:
                Print_all_student();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid option. Please try again.\n");
        }
    }
}
