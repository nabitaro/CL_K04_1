/*1T1_31_Kazuto Mituhashi*/
/*kadai04_1*/
#include <stdio.h>
//
void main(void){
	int a[5];
	int i;
	for(i = 0;i < 5;i = i + 1){
		a[i] = i * 10;
	}
	for(i = 0;i < 5;i = i + 1){
		printf("a[%d] = %d\n",i,a[i]);
	}
}