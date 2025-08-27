#include <stdio.h>
typedef struct student
{
    int id;
    char name[20];
    float marks;

} student;

typedef union student1
{
    int id;
    char name[20];
    float marks;
    /* data */
} student1;


int main(void){
    // struct student s1 = {1, "Alice", 69.69};
    // struct student sunny = {69, "Sunny", 69.69};
    // printf("ID: %i\n",s1.id);
    // printf("Name: %s\n",s1.name);
    // printf("Marks: %f\n",s1.marks);
    // printf("\n");
    // printf("ID: %i\n",sunny.id);
    // printf("Name: %s\n",sunny.name);
    // printf("Marks: %f\n",sunny.marks);
    
    // // s1.id = 2;
    // // printf("ID: %i\n",s1.id);
    
    // printf("%i\n",sizeof(s1));
    // printf("%i\n",sizeof(vipul));
    // printf("%i\n",sizeof(sunny));
    
    // Use of typedef;
    student s1 = {1, "Alice", 69.69};
    student s2 = {1, "Alice", 69.69};
    printf("ID: %i\n",s1.id);
    printf("%lu\n",sizeof(student)); // size of struct
    printf("%lu\n",sizeof(student1)); // size of union
}
