#include <stdio.h>

typedef struct Book
{
    char title[50];
    char author[50];
    float price;
} Book;

int main()
{
    Book books[3]; // Array to store details of 3 books

    // Input details for 3 books
    for (int i = 0; i < 3; i++)
    {   
        printf("\t");
        printf("Enter details for Book %d:\n", i + 1);

        printf("Enter Title: ");
        scanf(" %s", books[i].title); // To read a string with spaces

        printf("Enter Author: ");
        scanf(" %s", books[i].author); // To read a string with spaces

        printf("Enter Price: ");
        scanf("%f", &books[i].price);

        printf("\n");
    }

    // Display details of 3 books
    printf("Details of Books:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
        printf("\n");
    }

    return 0;
}