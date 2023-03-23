#include <stdio.h>
int main(){
	int a[6]={1,5,4,6,9,7};
	for(int i=0;i<6;i++){
		if (a[i]%2!=0){
			printf("%d\n",a[i]);
		}
		else{
			continue;
		}
	}
	return 0;
}