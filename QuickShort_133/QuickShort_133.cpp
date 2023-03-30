#include <iostream>
using namespace std;


int arr[20];        //array of intrgres to ho
int cmp_cout = 0;
int mov_cout = 0;
int n;

void input() {
	while (true)
	{
		cout << "masukan panjang element array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;

	
	}

	cout << "\n ------------------" << endl;
	cout << "\nEnter array Element" << endl;
	cout << "\n ------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + i) << ">";
		cin >> arr[i];
	}
}

//swaps the elemnt st index x with the elemnt at index y
void swep(int x, imt y)
{
	int temp;

	temp = arry[x];
	arry[x] = arry[y];
	arry[y] = temp;

}

void q_short(int low, int high)
{
	int pivot, i, j;
	if (low > high)
		return;                          // Langkah algoritma No. 1
}