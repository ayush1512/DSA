#include <stdio.h>
typedef struct Student
{
    int roll_no;
    char name[30];
    float marks;
} Student;
int main()
{
    Student s1;
    Student s2;

    printf("Enter Student Roll Number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter Student Name: ");
    scanf("%s", s1.name);

    printf("Enter Student Marks: ");
    scanf("%f", &s1.marks);
    // Student s1 = {1,"Anaya",76.98};
    printf("%i\n",s1.roll_no);
    printf("%s\n",s1.name);
    printf("%f\n",s1.marks);

    return 0;
    
}