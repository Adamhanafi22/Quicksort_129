#include <iostream>
using namespace std;

//Array of integress to hold values
int arr[20];
int cmp_count = 0; //number of comparasion
int mov_count = 0; //number of movement
int n;
void input() {
	while (true)
	{
		cout << "masukkan panjang element array:";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "n\ Maksimum panjang array adalah 20 " << endl;

	}
	cout << "n\__________________" << endl;
	cout << "n\Enter array element" << endl;
	cout << "n\__________________" << endl;
	

}
