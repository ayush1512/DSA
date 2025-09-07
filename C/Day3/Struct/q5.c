#include <stdio.h>
typedef struct Student
{
    int rno;
    float marks;
} Student;

int main()
{
    Student s[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Details\n");
        printf("Student %i rno: ", i + 1);
        scanf("%i", &s[i].rno);
        printf("Student %i marks: ", i + 1);
        scanf("%f", &s[i].marks);
    }
    float high = 0;
    int r = 0;
    for (int i = 0; i < 5; i++)
    {
        if (s[i].marks > high)
        {
            high = s[i].marks;
            r = i;
        }
    }
    printf("Highest Marks scored by Roll number %i scoring %.2f\n", s[r].rno, high);
    return 0;
}