//============================================================================
// Name        : EX1_3_1cpp
// Author      : wada
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int WorkTime;
	int HourlyWage;
	int Earn;
	cout<<"input working time"<<endl;
	cin>>WorkTime;

	cout<<"input hourly wage"<<endl;
	cin>>HourlyWage;

	Earn = WorkTime * HourlyWage;

	cout << "sum earn is " << Earn<<endl;

	return 0;
}
