#include <stdio.h>

int main(){
	int n,m; 
	printf("nhap n =");
	scanf("%d",&n);
	do{
		printf("nhap m");
		scanf("%d",&m);
	}while(m<n);
	printf("nhung so nguyen to la :\n");
	int dem=0;
	for(int i=n;i<m;i++){
		for(int j= 1;j <=i; j++){
			if(i%j==0){
			dem++;
			}	
		}
		if(dem==2){
			printf("%d  \n",i);
		}
	}
	return 0;
} 
