#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(double s) {
	char gd;
	
	if (s > 90)
		gd = 'A';
	if (s > 75 && s <= 90)
		gd = 'B';
	if (s > 60 && s <= 75)
		gd = 'C';
	if (s > 45 && s <= 60)
		gd = 'D';
	if (s <= 45)
		gd = 'F';
	return gd;
}

int main(){
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];
	
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline(cin, name[i]);
		cout << "Score of student " << i+1 << ": ";
		cin >> score[i];
		i++;
	}
	
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}
