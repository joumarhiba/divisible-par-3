#include<stdio.h>
int main(){
	int t[10],i,c;
	//remplir
	for(i=0;i<10;i++){
		printf("t[%d] = ",i);
		scanf("%d",&t[i]);
	}
	c=0;
	for(i=0;i<10;i++){
		if(t[i]%3!=0){
		c++;
		}
	}
	
	printf("le nombre des elements qui n\'ont pas diviible pas 3 : %d",c);
}
