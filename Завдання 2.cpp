#include <stdio.h>
#include <stdlib.h>//��������� ��� ������ � ���'����

int main() {
    int size; //���������� ����� size

    printf("Array size: ");// �������� �� ����� ����� ��� �������� ������ ������
    scanf_s("%d", &size);// ������� �������� ����� ������

    int* arr = (int*)malloc(size * sizeof(int));// �������� �������� ���'��� ��� ������
    if (arr == NULL) {
        printf("no data avaible\n");// �������� ����������� ��� ������� �������� ���'��, ��������� ��������
        return 1;
    }

    printf("Array element:\n");// �������� �� ����� ����� ��� �������� �������� ������
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf_s("%d", &arr[i]);// ������� ������� �������� ��� ������� �������� ������
    }

    int* ptr = arr; // ����������� �������� ptr, ���� ����� �� ������� ������
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += *ptr; // ��������� ��������, �� ��� ����� ��������, �� ����
        ptr++;       // ������� �� ���������� �������� ������
    }//���� ��� ���������� ���� �������� ������ �� ��������� ���������.

    
    float average = (float)sum / size; // ���������� ���������� ��������

    printf("Average value: %.2f\n", average);// �������� ������� �������� � ����� ������� ���� ����

    free(arr);// ��������� ������� ���'��� ��� ������

    return 0;//����������� ������� main()
}
