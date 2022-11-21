#include <iostream>
#include <ctime>

using namespace std;


void inputArray(int array[], int size){
	for (int i = 0 ; i < size; i++){
		cout<<"#"<<i+1<<" ";
		cin>>array[i];
	}
}

void sort(int array[], int size){
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

void printArray(int array[], int size){
	for (int i = 0 ; i < size; i++){
		cout<<array[i]<<" ";
	}
}

void generateArray(int array[], int size){
	srand((unsigned int) time(0));
	for (int i = 0 ; i < size; i++){
		array[i] = rand() % 100; //random integer from 0 to 99
	}
}

int main(){
	
	int size;
	cout<<"Enter total number of integers to sort: ";
	cin>>size;
	
	//array to hold integers
	int array[size];
	
	//input integers
	//inputArray(array, size);
	
	//generate random sample
	generateArray(array, size);
	
	//sort
	sort(array, size);
	
	//printing the sorted array
	printArray(array, size);
	
}










