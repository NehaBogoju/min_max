#include<stdio.h>
int main(){
	int a,b,flag=0;
	scanf("%d %d",&a,&b);
	int min=a<b?a:b;
	int max=a>b?a:b;
	while(min<=max){
	if(min==max){
		flag=1;
		break;
	}else{
		min=min*2;
	}
}
	if(flag==1){
		printf("yes");
	}
	else{
		printf("no");
	}
}
