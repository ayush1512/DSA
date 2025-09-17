#include <stdio.h>
#include <string.h>

typedef struct Student {
    int rollNo;
    char name[20];
    int marks[3];
    int total;
} student;

student s[10];
int n;

void add() {
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i+1);
        printf("Enter roll number: ");
        scanf("%d", &s[i].rollNo);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        s[i].total = 0;
        for (int j = 0; j < 3; j++) {
            printf("Enter marks for subject %d: ", j+1);
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
    }
}

void display() {
    printf("\nAll Students Details:\n");
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Roll Number: %d\n", s[i].rollNo);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %d %d %d\n", s[i].marks[0], s[i].marks[1], s[i].marks[2]);
        printf("Total: %d\n", s[i].total);
    }
}

void highTotal() {
    int highest = 0;
    int index = 0;
    for(int i = 0; i < n; i++) {
        if(s[i].total > highest) {
            highest = s[i].total;
            index = i;
        }
    }
    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", s[index].name);
    printf("Roll Number: %d\n", s[index].rollNo);
    printf("Total Marks: %d\n", s[index].total);
}

void marksSort() {
    student temp;
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(s[j].total < s[j+1].total) {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    printf("\nStudents sorted by total marks (descending):\n");
    display();
}

int main() {
    int choice;
    add();
    
    do {
        printf("\nMenu:\n");
        printf("1. Display all students\n");
        printf("2. Find student with highest marks\n");
        printf("3. Sort and display by total marks\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: display(); break;
            case 2: highTotal(); break;
            case 3: marksSort(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 4);
    
    return 0;
}
