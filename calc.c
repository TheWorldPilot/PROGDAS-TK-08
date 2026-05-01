#include <stdio.h>

int main() {
	int n;
	float input1, input2, result;
	
	printf("Daftar Operasi\n");
	printf("1. Penjumlahan\n");
	printf("2. Pengurangan\n");
	printf("3. Perkalian\n");
	printf("4. Pembagian\n");
	printf("Apa operasi yang ada ingin lakukan? ");
	scanf("%d", &n);
	
	switch (n){
	//Addition
	case 1:
		printf("Input angka 1: ");
		scanf("%f", &input1);
		printf("Input angka 2: ");
        scanf("%f", &input1); 
		result = input1+input2;
		printf("Hasil penjumlahan : %.2f\n", result);
		break;

	//Subtraction
	case 2:
		printf("Input angka 1: ");
		scanf("%f", &input1);
		printf("Input angka 2: ");
        scanf("%f", &input1); 
		result = input1-input2;
		printf("Hasil penjumlahan : %.2f\n", result);
		break;

	//Multiplication
    case 3:
        printf("Input angka 1:");
        scanf("%f", &input1);
        printf("Input angka 2: ");
        scanf("%f", &input2);
        result = input1 * input2;
        printf("Hasil perkalian : %.2f\n", result);
        break;
        // Division
    
	case 4:
        printf("Input angka 1:");
        scanf("%f", &input1);
        printf("Input angka 2: ");
        scanf("%f", &input2);
        result = input1 / input2;
        printf("Hasil pembagian : %.2f\n", result);
        break;

    default:
        printf("Input opsi yange benar!\n");
        break;
    }
    return 0;
}
