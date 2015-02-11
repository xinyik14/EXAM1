/*add_to_begin/end
add an element to the begining/end of a vector/array v.*/

#include <iostream>
#include <array>

using namespace std;

void add_to_begin(int* array, int& target){

	int n = sizeof(array)/sizeof(int);
	int* temp = new int[n+1];
    temp[0] = target;
    cout<<temp[0]<<endl;

    for(int i = 0; i<n; i++)
    {
    	temp[i+1] = array[i];
    }

    delete[] array;
    
    array = temp;
    cout<<array[0]<<endl;
}

void add_to_end(int* array, int& target){

	int n = sizeof(array)/sizeof(int);
	int* temp = new int[n+1];
    temp[n+1] = target;

    for(int i = 0; i<n; i++)
    {
    	temp[i] = array[i];
    }

    delete[] array;
    array = temp;

}

int main(){

	int* array = new int[3];

	for(int i = 0; i<3;i++)
		array[i] = i; 

	cout<<array[0]<<array[1]<<array[2]<<endl;
	//
	//array to be assigned
	int target_beg = 4;
	//
	//target to be added at the front
	int target_end;
	//
	//target to be added at the end
	add_to_begin(array, target_beg);
	cout<<array[0]<<endl;//array after adding an element to the beginning 
	add_to_end(array, target_end);

	return 0;



}