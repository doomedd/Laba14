#include <stdio.h>
#include <stdlib.h>
//��������� ���������
int main() {
    int size;

    printf("enter array size: ");//�������� �� ����� ����� ��� �������� �����
    scanf_s("%d", &size); //���������� ��������� ������ �����

    int* arr = (int*)malloc(size * sizeof(int));//�������� �������� ���'�� ��� ������ ���� int ������� size.
    if (arr == NULL) {
        printf("false \n");
        return 0;
    }//��������, �� ������ ���� ������� ���'���. ���� �������� �������, ���������� ����������� ��� ������� �� �������� ����������� 
    printf("Array element:\n");
    for (int i = 0; i < size; ++i) {
        printf("element %d: ", i + 1);
        scanf_s("%d", &arr[i]);
    }//���� ��� �������� ������� �������� ������. ���������� ������� �������� ��� ������� ������������
    // ����� ����������� ����������, ������������� �������� �� ������ �� ���� ��� ������������ ������ �������
    int* minPtr = arr;
    int* maxPtr = arr;
    //���������� ��������� minPtr � maxPtr, �� �������� �� ������ ������� ������.
    // ��������� ������ ���������� �� ������������� �������� � �����
    for (int i = 1; i < size; ++i) {
        if (*(arr + i) < *minPtr) {
            minPtr = arr + i;
        }
        if (*(arr + i) > *maxPtr) {
            maxPtr = arr + i;
        }
    }//���� ��� ����������� ����� ���������� �� ������������� �������� � �����. 

    printf("min: %d\n", *minPtr);
    printf("max: %d\n", *maxPtr);

    // ���������� ������� �� ��������� ���������� �� ������������� ��������
    int distance = (int)(maxPtr - minPtr);
    printf("distance: %d\n", abs(distance));
    free(arr);
    return 0;
}
