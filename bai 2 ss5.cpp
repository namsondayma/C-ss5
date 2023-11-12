#include<stdio.h>
int main(){
	int Commission,revenue;
	printf("Nhap doanh thu ban hang va tien hoa hong\n");
	scanf("%d",&revenue);
	if(revenue<=300 && revenue>100 ){
		printf("Hoa hong dai ly la %d",Commission = revenue*0.1);} 
		else if(revenue<=100){
			printf("Hoa hong dai ly la %d",Commission = revenue*0.05);
	} else
	printf("Hoa hong dai ly la %d",Commission = revenue*0.2);
}
