#include"stdio.h"
main(){
int b,i,j=0;
	for(i=1;i<=10;++i){
		for(b=j;b<=10;++b)
		printf(" ");
			for(j=0;j<i;++j){
			printf("-");
			printf(" ");
			}
		printf("\n");	
	}
	j=11;
	for(i=10;i>=1;--i){
		for(j=11;j>i;--j)
		printf(" ");
			for(b=j;b>=1;--b){
			printf(" ");
			printf("-");
			}

		printf("\n");	
	}
	
return 0;
}
