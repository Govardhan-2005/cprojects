#include <stdio.h>

int main() {
    char tasks[10][100];
    int n;

    printf("How many tasks do you want to add (Max 10)? ");
    scanf("%d", &n);

    getchar();

    for(int i = 0; i < n; i++) {
        printf("Task %d: ", i + 1);
        fgets(tasks[i], sizeof(tasks[i]), stdin);
    }

    printf("\nYour To-Do List\n");

    for(int i = 0; i < n; i++) {
        printf("%d. %s", i + 1, tasks[i]);
    }

    return 0;
}