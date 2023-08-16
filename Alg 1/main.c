#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num1, num2, num3, res;

	printf("Digite seu primeiro numero:");
	scanf("%d", &num1);
	printf("Digite seu segundo numero:");
	scanf("%d", &num2);
	printf("Digite seu terceiro numero:");
	scanf("%d", &num3);
	res = (num1+num2);
	if(res<num3){
		printf("\n valor da soma < maior q c ");
	}

	

}
