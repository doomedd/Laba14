#include <stdio.h>
#include <stdlib.h>
//підключили директиви
int main() {
    int size;

    printf("enter array size: ");//виводимо на екран текст про введення числа
    scanf_s("%d", &size); //зчитування введеного цілого числа

    int* arr = (int*)malloc(size * sizeof(int));//Виділення динамічної пам'яті для масиву типу int розміром size.
    if (arr == NULL) {
        printf("false \n");
        return 0;
    }//Перевірка, чи успішно була виділена пам'ять. Якщо виділення невдале, виводиться повідомлення про невдачу та програма завершується 
    printf("Array element:\n");
    for (int i = 0; i < size; ++i) {
        printf("element %d: ", i + 1);
        scanf_s("%d", &arr[i]);
    }//Цикл для введення кожного елемента масиву. Користувач вводить значення для кожного елементаента
    // Логіка знаходження мінімального, максимального елементів та відстані між ними без використання окремої функції
    int* minPtr = arr;
    int* maxPtr = arr;
    //Оголошення вказівників minPtr і maxPtr, які вказують на перший елемент масиву.
    // Знаходимо адреси мінімального та максимального елементів у масиві
    for (int i = 1; i < size; ++i) {
        if (*(arr + i) < *minPtr) {
            minPtr = arr + i;
        }
        if (*(arr + i) > *maxPtr) {
            maxPtr = arr + i;
        }
    }//Цикл для знаходження адрес мінімального та максимального елементів у масиві. 

    printf("min: %d\n", *minPtr);
    printf("max: %d\n", *maxPtr);

    // Обчислюємо відстань між позиціями мінімального та максимального елементів
    int distance = (int)(maxPtr - minPtr);
    printf("distance: %d\n", abs(distance));
    free(arr);
    return 0;
}
