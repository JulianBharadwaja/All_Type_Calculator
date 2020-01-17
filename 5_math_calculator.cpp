#include<iostream>
#include<cmath>
using namespace std;
void arithmetic(){
	int op = 0;
	float a = 0;
	float b = 0;
	cout << "Enter operation:\n";
	cout << "1.Addition \n";
	cout << "2.Substraction \n";
	cout << "3.Multiplication \n";
	cout << "4.Division \n";
	cin >> op;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";;
	cin >> b;

	switch(op){
		case 1: cout << "Addition result: " << (a+b) << endl;break;
		case 2: cout << "Substraction result: " << (a-b) << endl;break;
		case 3: cout << "Multiplication result: " << (a*b) << endl;break;
		case 4: cout << "Division result: " << (a/b) << endl;break;
		default : cout << "Invalid operation!";break;
	}
}
void trigonometric(){
	int op = 0;
	float val = 0.0;
	cout << "Enter operation \n";
	cout << "1.Sine\n";
	cout << "2.Cosine\n";
	cin >> op;
	cout << "Enter value to calculate: ";
	cin >> val;
	if(op == 1){
		cout << "Sine result: " << sin(val) << endl;
	}else if(op == 2){
		cout << "Cosine result: " << cos(val) << endl;
	}else {
		cout << "Invalid Operation!";
	}
}
void exponential(){
	float base = 0.0;
	float eee = 0.0;
	cout << "Enter value for base: ";
	cin >> base;
	cout << "Enter value for exponent: ";
	cin >> eee;
	cout << pow(base,eee) << endl;
}
void logarithmic(){
	float val = 0.0;
	cout << "Enter value for log(e): ";
	cin >> val;
	cout << "The result of log: " << log(val) << endl;	
}
int main(){
	int sel = 0;
	cout << "ADVANCED CALCULATOR\n";
	cout << "Enter the type of operation you want to calculate: " << endl;
	cout << "1. Arithmetic\n";
	cout << "2. Trigonometric\n";
	cout << "3. Exponential\n";
	cout << "4. Logarithmic\n";
	cout << "Your choice: ";
	cin >> sel;
	
	switch(sel){
		case 1: arithmetic();break;
		case 2: trigonometric();break;
		case 3: exponential();break;
		case 4: logarithmic();break;
		default: cout << "Invalid operation";
	}
	return 0;
}
