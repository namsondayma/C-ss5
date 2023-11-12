#include<stdio.h>
int main(){
	int day , month;
	printf("nhap ngay sinh va thang sinh");
	scanf("%d %d", &day, &month);
	if(day>=21 && month==3||day<=20 && month==4){
		printf("Bach Duong");
	}else if(day>=21 && month==4||day<=20 && month==5){
		printf("Kim Nguu");
	}else if(day>=21 && month==5||day<=21 && month==6){
		printf("Song Tu");
	}else if(day>=22 && month==6||day<=22 && month==7){
		printf("Cu Giai");
	}else if(day>=23 && month==7||day<=22 && month==8){
		printf("Su Tu");
	}else if(day>=23 && month==8||day<=22 && month==9){
		printf("Su Nu");
	}else if(day>=23 && month==9||day<=23 && month==10){
		printf("Thien Binh");
	}else if(day>=24 && month==10||day<=22 && month==11){
		printf("Bo Cap");
	}else if(day>=23 && month==11||day<=21 && month==12){
		printf("Nhan Ma");
	}else if(day>=22 && month==12||day<=19 && month==1){
		printf("Ma Ket");
	}else if(day>=20 && month==1||day<=18 && month==2){
		printf("Bao Binh");
	}else if(day>=19 && month==2||day<=20 && month==3){
		printf("Song Ngu");
	}
}
