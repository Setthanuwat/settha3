#include<iostream>
using namespace std;

char before(char x){
    char Y = 'Z';
    char Z = '0';
	if('A'<x && x <= 'Z'){
		char y = x-1;
		return y;
	}
	
	if(x == 'A'){
		return Y;
		
	}
	
	else{
	
		return Z;
	}
	

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
