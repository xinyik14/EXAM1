/*find occurrences
Find the number of concurrences of an element t in a vector/array v, of size n */ 

#include <iostream>
#include <array>
using namespace std;

int find(int t, int n, int a[n]){
	int count;
	for(int j = 0; j<n; j++){
		if(a[j]==t){
			count++;
		}
	}
	return count;
}


int main(){
	int n;
	//
	//to be assigned
	int array[n];
	//
	// to be assigned
	int target;
	//
	// to be assigned
	cout<<"The number of occurrences of an element"<<target<<
	"is"<<find(target, n, array)<<endl;
	return 0;
}
