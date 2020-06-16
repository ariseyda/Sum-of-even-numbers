#include<stdio.h>

//Sum of even numbers

int main(){
	
	int i;
	int sum=0;
	
	for(i=0;i<15;i++){
		
		if(i%2==0){
			
			sum+=i;
			
			
		}
		
		continue;
		
		
	}
	
	printf("Sum of even numbers:%d",sum);
	
}
