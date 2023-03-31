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

	for (int i = 0; i < n; i++)

	{		
		cout << "<" << (i + 1) << "<";
		cin >> arr[i];
	}
}
//swap the element at index x with the element at index y
void swap(int x, int y )
{
	int temp;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp; 

}
void q__sort(int low, int high)
{
	int pivot, i j;
	if (low > high) //Langkah 1
		return;

	i = low + 1; //langkah 3
	j = high; // langkah 4
	pivot = arr[low];//langkah 2
	
	while (i <= j)
	{
		while ((arr[i] <= pivot) && (i <= high))
		{
			i++;
			cmp_count++;

		}
		cmp_count++;
		while ((arr[j] > pivot) && (j >= low))
		{
			j--;
			cmp_count++;

		}

	}


}


