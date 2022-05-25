#include <iostream>
#include <string>
using namespace std;
struct emp {

	int id;
	string name;
	double hours;
	double overtime;
	double overall;


};
void calc(emp* arr, int size, float rate) {
	cout << "ID" << "      " << "NAME" << " " << " overall" << endl;
	for (size_t i = 0; i < size; i++)
	{
		arr[i].overall = arr[i].hours * rate + 1.5 * arr[i].overtime * rate;
		cout << arr[i].id << " " << arr[i].name << " " << arr[i].overall << endl;
	}


}

int main() {
    
	
	cout << "enter the number of employees" << endl;
	int size;
	cin >> size;
	emp* arr = new emp[size];

	float rate = 25.5;

	for (size_t i = 0; i < size; i++)
	{
		cin >> arr[i].id;
		cin >> arr[i].name;
		cin >> arr[i].hours;
		cin >> arr[i].overtime;

	}
	calc(arr, size, rate);



	return 0;
	

}
