#include <stdio.h>
int main(){
	int a;
	for(a=1; a<=10; a++){
		if(a==5){
			continue;
		}
		printf("%d \n",a);
	}
	
	return 0;
}
