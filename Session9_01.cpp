#include <stdio.h>
int main() {
    int array[100];
    int currentLength = 0;
    int number;
    printf("Nhap phan tu: ");
    scanf("%d", &number);
    if (number > 100) {
        printf("so phan tu khong duoc lon hon 100\n");
        return 1;
    } else {
        currentLength = number;
        for (int i = 0; i < currentLength; i++) {
            printf("nhap phan tu thu %d: ", i + 1);
            scanf("%d", &array[i]);
        }
        int addValue, addIndex;
        printf("Nhap gia tri muon them: ");
        scanf("%d", &addValue);
        printf("Nhap vi tri muon them: ", 99);
        scanf("%d", &addIndex);
        if (addIndex < 0 || addIndex > 99) {
            printf("Vi tri khong hop le\n");
            return 1;
        } else if (addIndex >= currentLength) {
            array[addIndex] = addValue;
            currentLength = addIndex + 1;
        } else {
            for (int i = currentLength; i > addIndex; i--) {
                array[i] = array[i - 1];
            }
            array[addIndex] = addValue;
            currentLength++;
        }
        printf("mang moi la:\n");
        for (int i = 0; i < currentLength; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }
    return 0;
}

