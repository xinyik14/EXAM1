/*find_sum
find in a vector/array the sum of only those elements which are less than 43*/

#include <iostream>
#include <vector>

using namespace std;

int find_sum(vector<int> vec, int l){//l is the upper limit of the value
	int s;
	for(int i = 0; i < vec.size(); i++){
		if(vec[i] < l){
			s += vec[i];
		}

	}

	return s;
}

int main(){
	vector<int> vec;
	//
	//vector to be assigned
	int l = 43;//upper limit
	cout<<find_sum(vec, l)<<endl;

	return 0;
}