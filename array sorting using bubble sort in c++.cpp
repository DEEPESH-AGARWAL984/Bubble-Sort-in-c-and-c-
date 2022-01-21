#include<iostream>
using namespace std;
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
	cout<<"Sorted array is: ";
	for(int i=0;i<size;i++){
		cout<<" "<<arr[i];
	}
	cout<<endl;
}


//Displaying sorted array in ascending order.
//void show_desc(int arr[],int size){
//	cout<<"Sorted array is: ";
//	for(int i=size;i>0;i--){
//		cout<<" "<<arr[i];
//	}
//}


int main(){
	
	int n;
	cout<<"Enter the size: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the array elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	bubbleSort(arr,n);
	display(arr,n);
	//Finding the second lowest value in array
	cout<<"Second Lowest Value: "<<arr[1]<<endl;
//	cout<<"Array in descending order: ";
//	for(int i=n-1;i>=0;i--){
//		cout<<" "<<arr[i];
//	}
//	cout<<endl<<"Second Highest Value: "<<arr[1];
	
}
