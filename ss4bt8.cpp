#include<stdio.h>
int main(){
	double a,b,c;
	printf("moi ban nhap do dai canh a la: ");
	scanf("%lf",&a);
	printf("moi ban nhap do dai canh b La: ");
	scanf("%lf",&b);
	printf("moi ban nhap do dai canh c la: ");
	scanf("%lf",&c);
	if(a<=0||b<=0||c<=0){
		printf("do dai khong hop le.");
	}else if(a+b>c && a+c>b && b+c>a){
		printf("La 3 canh tam giac");
	}else{
		printf("khong phai 3 canh tam giac");
	}
	return 0;
}
