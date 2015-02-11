/*concatenate two strings
concatenate two strings, each of n characters long.*/

#include <iostream>
#include <string>
using namespace std;

string concatenate(string str1, string str2){
	string str;
	if(str1.size() == str2.size()){

		int n = str1.size();
		str.resize(2*n);

		for(int i = 0; i<n; i++){
			str[i] = str1[i];
		}

		for(int j = n; j<2*n; j++){
			str[j] = str2[j-n];
		}
	}

	else{
		cout<<"Error! Two strings should have same size."<<endl;
	}

	return str;
}

int main(){
	string str1("abcdefg");
	string str2("hijklmn");

	cout<<concatenate(str1, str2)<<endl;

	return 0;
}