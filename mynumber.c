#include<stdio.h>

int main(){
	for(i=0; i<=100; i++){
		if(i%2!=0){
			printf("%d",i);
		}
	}
	for(i=1; i<=100; i++){
		if(i%2==0){
			printf("%d",i);
		}
	}
	for(int i=2; i<=100; i++){
		int prime=1;
		for(int j=2; j<i; j++){
			if(i%j==0){
				prime=0;
				break;
			}
		}
		if(prime){
			printf("%d",i);
		}
	}
	return 0;
}

