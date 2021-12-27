#include<stdio.h>

void INPUT(){
	int arr[10];
	printf("Enter ten numbers in ascending order: ");
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);	
	}
}

void binarySearch(){
	int key,l=0,h=9,temp=-1,arr[10];
	printf("Enter the number to find it's position: ");
	scanf("%d",&key);
	while(arr[(l+h)/2]<key){
		l=(l+h)/2;
		temp=l;
	}
	while(arr[(l+h)/2]>key){
		h=(l+h)/2;
		temp=h;
	}
	if(arr[(l+h)/2]==key){
		printf("The position is %d!!\n",1+(l+h)/2);
	}
	else{
		printf("The position is %d!!\n",l+1);
	}
}

void main(){ 
		INPUT();
		binarySearch();
}
