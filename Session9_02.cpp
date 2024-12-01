#include <stdio.h>
int main() {
    int array[100];
    int number;
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &number);
    if (number > 100) {
        printf("so phan tu khong lon hon 100\n");
        return 1;
    }
    for (int i = 0; i < number; i++) {
        printf("nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    int addIndex, addValue;
    printf("nhap vao vi tri muon doi: ");
    scanf("%d", &addIndex);
    if (addIndex < 0 || addIndex >= number) {
        printf("vi tri khong ton tai\n");
        return 1;
    }
    printf("nhap gia tri moi: ");
    scanf("%d", &addValue);
    array[addIndex] = addValue;
    printf("mang sau khi doi la:\n");
    for (int i = 0; i < number; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

