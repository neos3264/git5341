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
	return 0;
}

