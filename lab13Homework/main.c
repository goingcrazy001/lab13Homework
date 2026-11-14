#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "RUS");
    int A[100];
    int n;
    printf("Введите количество элементов: ");
    scanf("%d", &n);

    printf("Введите элементы массива: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    int first = -1;
    int last = -1;
    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            if (first == -1) first = i;
            last = i;
        }
    }

    if (first == -1) {
        printf("Отрицательных элементов нет\n");
        return 0;
    }

    int p = 1;
    for (int i = first+1; i < last; i++)
        p *= A[i];

    printf("Произведение: %d\n", p);

    return 0;
}