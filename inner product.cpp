/*inner_product
Find the inner product of two vectors v1 and v2, each of size n. */

#include <iostream>
#include <vector>

using namespace std;

int inner_product(vector<int> v1, vector<int> v2){
	int* s;
	if(v1.size() == v2.size()){
		for(int i = 0; i < v1.size(); i++){
			*s = *s+(v1[i]*v2[i]);
		}

	}
	else{
		cout<<"Error! Two vectors should have same length to do inner product."<<endl;
	}
	return *s;
}

int main(){
	vector<int> v1;
	//
	//vector to be assigned
	vector<int> v2;
	//
	//vector to be assigned

	cout<<inner_product(v1, v2)<<endl;

	return 0;
}