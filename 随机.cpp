#include <stdio.h>
#include <time.h>
#include<windows.h>
int main(){
	int f,n,p,c,z; 
	srand((unsigned)time(NULL));
	f=rand()%100;
	p=1;
	c=1;
	z=1;
while(c==1){
	printf("*******************************\n");
	printf("输入1开始游戏，输入其他退出游戏\n");
	printf("*******************************\n");
	printf("\n");
	printf("\n");
	scanf("%d",&z);
		if(z==1){
				printf("*******************************\n");
				printf("************游戏开始***********\n");
				printf("*******************************\n");
				printf("********输入数字（0-99）*******\n");
				while(c==1){
		scanf("%d",&n);
		if(n==f){
			printf("************猜对了**************\n"); 
			printf("\n");
			printf("\n");
			break; 
		}
		else if(n>f){
			printf("************猜大了**************\n");
		}
		else if(n<f){
			printf("************猜小了**************\n");
		} }
		}
		else{
			break;
		}
	} 
	}
