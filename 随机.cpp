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
	printf("����1��ʼ��Ϸ�����������˳���Ϸ\n");
	printf("*******************************\n");
	printf("\n");
	printf("\n");
	scanf("%d",&z);
		if(z==1){
				printf("*******************************\n");
				printf("************��Ϸ��ʼ***********\n");
				printf("*******************************\n");
				printf("********�������֣�0-99��*******\n");
				while(c==1){
		scanf("%d",&n);
		if(n==f){
			printf("************�¶���**************\n"); 
			printf("\n");
			printf("\n");
			break; 
		}
		else if(n>f){
			printf("************�´���**************\n");
		}
		else if(n<f){
			printf("************��С��**************\n");
		} }
		}
		else{
			break;
		}
	} 
	}
