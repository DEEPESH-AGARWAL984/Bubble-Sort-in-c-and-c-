#include<stdio.h>
#include<conio.h>


void bubbleSort(int arr[],int size){
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				int a = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = a;
			}
		}
	}
}

//Displaying sorted array in ascending order.
void display(int arr[],int size){
	printf("Sorted array is: ");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}

int main(){
	
	int n;
	printf("Enter the size: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter the array elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
//	cout<<"Array elements are: ";
//	for(int i=0;i<n;i++){
//		cout<<" "<<arr[i];
//	}

	bubbleSort(arr,n);
	display(arr,n);
//	show_desc(arr,n);
}

