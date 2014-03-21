#include"stdio.h"
#include"string.h"
main(){
char a[]={'f','g','h','k'};
char b[3];
int c=0,i,j;
	for(i=1;i<4;++i){
		printf("%d Enter your password ",i);
		scanf("%s",&b);
		for(j=0;j<strlen(a);++j){
			if(b[j]==a[j])
			++c;
		}
			if(c==strlen(a)){
			printf("Password matched\n");
			return;
			}
				if(i==3)
				printf("You have tried %d times and finished your quota of a day\n",i);
	}
return 0;
}
