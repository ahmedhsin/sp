#include <iostream>
#include <cmath> //pow function

using namespace std;

/*
هو مدينا معادلة فيها 3 متغيرات ومدينا قيم مختلفة ليهم
عايزنا نلف على القيم دي كلها ونطلع الناتج فكل مرة ونطبعهم ف شكل جدول لطيف
لو ركزنا في المثال هنلاقي ان الترتيب الي هو عايزنا نلف عليهم بيه هو 
n
بعدها
r
واخر حاجة 
p
*/

int main()
{
	cout << 'p' << "\t"
		<< 'r' << "\t "
		<< 'n' << "\t"
		<< 'v' << "\n";

	float v; //result

	int ns[3] = { 1, 2,3 }; // n values

	float rs[21]; // loop to fill r values
	for (int j = 0; j < 21; j++)
		rs[j] = 0.10 + 0.01*j;

	int ps[4] = { 1000, 4000, 7000, 10000 }; // p values

	for (int k = 0; k < 4; k++) //switching p loop
	{
		for (int j = 0; j < 21; j++) //switching r loop
		{
			for (int i = 0; i < 3; i++) //switching n loop
			{
				v = ps[k] *pow( (1 + rs[j]), ns[i]); //calculation
				cout << ps[k] << "\t" //print current p value
					<< rs[j] << "\t " //print current r value
					<< ns[i] << "\t" //print current n value
					<< v << "\n"; // print v for given combination of values
			}
		}
	}
	return 0;
}
