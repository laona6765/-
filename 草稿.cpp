#include <stdio.h>
#include <string.h>
int main(){
	char s[9999];
	gets(s);
	int len,i,a[9999],j;
	for(i=0;i<len;i++) a[i]=1; 
	len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]>='0'&&s[i]<='9'){
			a[i]=s[i]-'1';
		}
	}
	for(i=0;i<len;i++){
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
			for(j=0;j<=a[i+1];j++){
				printf("%c",s[i]);
			}
		}
	//for(i=0;i<len;i++) printf("%d ",a[i]);
}
}
