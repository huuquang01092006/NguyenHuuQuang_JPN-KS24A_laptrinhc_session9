#include <stdio.h>
int main(){
	int elect, number = 0, array[100];
	do{
		printf("MENU\n");
	    printf("1. nhap vao mang\n");
     	printf("2. hien thi mang\n");
    	printf("3. them phan tu\n");
	    printf("4. sua phan tu\n");
    	printf("5. xoa phan tu\n");
    	printf("6. thoat\n");
	    printf("lua chon cua ban: ");
     	scanf("%d", &elect);
     	switch(elect){
     		case 1:
     			printf("nhap so phan tu cua mang: ");
                scanf("%d", &number);
                if (number > 100) {
                	printf("so phan tu khong lon hon 100\n");
                } 
				for (int i = 0; i < number; i++) {
                    printf("nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &array[i]);
                }
     		    break;
     		case 2:
     			printf("mang hien tai:\n");
				for (int i = 0; i < number; i++) { 
				    printf("%d ", array[i]); 
				} 
				printf("\n");
     		    break;
     		case 3:
     			if (number >= 100) {
     				printf("khong the them phan tu nua\n"); 
					return 1;
				}
				int addValue, addIndex;
				printf("nhap vi tri muon them: ");
				scanf("%d", &addIndex);
				printf("nhap gia tri muon them: ");
				scanf("%d", &addValue);
				if (addIndex < 0 || addIndex > number){
					printf("vi tri khong hop le: ");
					return 1;
				}
				for (int i = number; i > addIndex; i--){
					array[i] = array[i] - 1;
				}
				array[addIndex] = addValue;
				number++;
     		    break;
     		case 4:
     		    printf("nhap vi tri can doi: ");
     		    scanf("%d", &addIndex);
     		    if (addIndex < 0 || addIndex > number){
					printf("vi tri khong hop le: ");
					return 1;
				}
				printf("nhap phan tu moi: ");
				scanf("%d", &addValue);
				array[addIndex] = addValue;
     		    break;
     		case 5:
     			printf("nhap vi tri can xoa: ");
     		    scanf("%d", &addIndex);
     		    if (addIndex < 0 || addIndex > number){
					printf("vi tri khong hop le: ");
					return 1;
				}
				for(int i = addIndex; i < number - 1; i++){
					array[i] = array[i + 1];
				}
     			break;
     		case 6:
     			printf("thoat chuong trinh\n");
     			break;
     		default:
     			printf("so khong hop le\n");
		 }
	} while (elect != 6);
	return 0;
}
