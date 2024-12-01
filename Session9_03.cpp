#include <stdio.h>
int main() {
    int array[100];
    int number, currentLength;
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &number);
    if (number > 100) {
        printf("so phan tu khong lon hon 100\n");
        return 1;
    }
    currentLength = number;
    for (int i = 0; i < currentLength; i++) {
        printf("nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    int deleteIndex;
    printf("nhap vi tri phan tu muon xoa: ", currentLength - 1);
    scanf("%d", &deleteIndex);
    if (deleteIndex < 0 || deleteIndex >= currentLength) {
        printf("vi tri phan tu khong hop le\n");
        return 1;
    }
    for (int i = deleteIndex; i < currentLength - 1; i++) {
        array[i] = array[i + 1];
    }
    currentLength--;
    printf("mang sau khi xoa phan tu la:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

