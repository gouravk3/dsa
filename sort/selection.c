//Test Case-1: 4 3 2 1 5 9 8 7 6 10
//Test Case-2: 12 32 5 45 89 65 45 56 87 65

#include<stdio.h>

void INPUT(){
	int arr[10];
	printf("Enter ten numbers: ");
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);	
	}
}

void SORTING(){
     int arr[10],temp=-1;
     for(int i=0;i<10;i++){
         for(int j=0;j<10;j++){
             if(arr[i]<arr[j]){
                 temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
             }
         }
     }
 }

 void PRINT(){
     int arr[10];
	printf("\nSorted:");
	for(int i=0;i<10;i++){
		printf(" %d",arr[i]);	
	}
    printf("\n");
 }

 int main(){
     INPUT();
     SORTING();
     PRINT();
     return 0;
 }