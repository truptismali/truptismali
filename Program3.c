#include <stdio.h>
struct books {
    char title[100];
    char author[100];
    char subject[100];
    int book_id;
};
int main() {
    struct books library[5];
    printf("Enter details for five books:\n");
     for (int i = 0; i < 5; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", library[i].title);
        printf("Author: ");
        scanf("%s", library[i].author);
        printf("Subject: ");
        scanf("%s", library[i].subject);
        printf("Book ID: ");
        scanf("%d", &library[i].book_id);
    }
    printf("\nEntered book details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Subject: %s\n", library[i].subject);
        printf("Book ID: %d\n", library[i].book_id);
    }

    return 0;
}