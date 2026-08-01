#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book books[5];

    printf("Enter details of 5 books:\n");

    for(int i = 0; i < 5; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &books[i].id);

        getchar();

        printf("Title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);

        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
    }

    printf("\nLibrary Records\n");

    for(int i = 0; i < 5; i++) {
        printf("\nBook ID : %d\n", books[i].id);
        printf("Title   : %s", books[i].title);
        printf("Author  : %s", books[i].author);
    }

    return 0;
}