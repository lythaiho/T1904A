#include <stdio.h>

int isPrime(int n){
	if(n<=1){
		return 0;
	}
	else{
		int x=0;
		for(int m=1;m<n;m++){
			if(n%m==0){
				x++;
			}
		}
		if(x==1){
			return 1;
		}
		else{
			return 0;
		}
	}
}
int main(){
	int a;
	printf("Dien so a = ");
	scanf("%d",&a);
	if(isPrime(a)==1){
		printf("So a la so nguyen to");
	}
	else{
		printf("So a khong phai la so nguyen to");
	}
}
