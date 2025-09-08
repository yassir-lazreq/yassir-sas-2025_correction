# include <stdio.h>
# include <stdbool.h>

int main() {
    int number;
    printf("veuillez entrer un nombre entier : ");
    scanf("%d", &number);
    bool is_pair(int n);
    if (is_pair(number) == true) {
        printf("Le nombre %d est pair.\n", number);
    } else {
        printf("Le nombre %d est impair.\n", number);
    }
    return 0;
}

bool is_pair(int n) {
    if (n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}