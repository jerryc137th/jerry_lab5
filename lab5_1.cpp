#include<iostream>
using namespace std;

int main(){
	int k;
	int l = 0,j = 0;
	cout << "Enter an integer: ";
	cin >> k;
	while(k!=0){
		if(k%2 == 0){
			j++;
		}else{
			l++;
		}
		cout << "Enter an integer: ";
		cin >> k;
	}
	cout << "#Even numbers = "<< j << endl;
	cout << "#Odd numbers = "<< l;
}