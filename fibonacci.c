#include<stdio.h>

void fibo(int n){
	int first = 2, second = 3, next, i;
	
	printf("Fibonacci series: ");
	
	for(i=0; i<n; i++){
	if(i<=1){
		next = i;
	}else{
		next = first+second;
		first = second;
		second = next;
	}
	printf("%d\t", next);
}
}



int main(){
	int n;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	fibo(n);
	return 0;
}
