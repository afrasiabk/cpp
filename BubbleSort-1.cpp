#include <iostream>

using namespace std;


//bubble sorting
void bubbleSort(int array[], int size){
	for (int i = 0; i < size-1; i++){
		
		for (int j = 0; j < size-i-1; j++){
			
			if (array[j] > array[j+1]){  // > for ascending order sorting, < for descending
				
				//swapping elements
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				
			}
			
		}
		
	}
	
}

//printing the sorted array
void printArray(int array[], int size){
	for (int i = 0 ; i < size; i++){
		cout<<array[i]<<" ";
	}
}

void inputArray(int array[], int size){
	//input integers
	for (int i = 0 ; i < size; i++){
		cout<<"#"<<i+1<<" ";
		cin>>array[i];
	}
}
int main(){
	
	int size;
	cout<<"Enter total number of integers to sort: ";
	cin>>size;
	
	//array to hold integers
	int array[size];
	
	inputArray(array, size);
	bubbleSort(array, size);
	printArray(array, size);

}