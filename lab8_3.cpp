#include<iostream>
using namespace std;

char before(char x){
	if('A'<x && x <= 'Z'){
		char y = x-1;
		cout << y;
		return 0;
	}
	
	if(x == 'A'){
		cout << "Z";
		return 0;
	}
	
	else{
		cout << "0";
	}
	
	return 0;

}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
