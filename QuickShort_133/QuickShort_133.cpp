#include <iostream>
using namespace std;


int arr[20];        //array of intrgres to ho
int cmp_count = 0;
int mov_count = 0;
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
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

//swaps the elemnt st index x with the elemnt at index y
void swep(int x, int y)
{
	int temp;

	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;

}

void q_short(int low, int high)
{
	int pivot, i, j;
	if (low > high)
		return;                          // Langkah algoritma No. 1


	// partition the list to parts;
	// one containing elemnts less that or equal to pivot
	// outher containing elements greather the pivot 

	pivot = arr[low];                    // langkah algoritma no 2
	                 
	i = low + 1;                         // langkah algoritma no 3
	j = high;                            // langkah algoritma no 4

	while (i <=j )
	{
		// search for an el element less then or equal to pivot
		while ((arr[i] <=  pivot) && (i <= high))           //langkah algoritma no 5
		{
			i++;                                            //langkah algoritma no 6
			cmp_count++;                                  
		}
		cmp_count++;                                        //langkah algoritma no 8
		

		// search for an el element less then or equal to pivot
		while ((arr[j] > pivot) && (j >= low))           //langkah algoritma no 7
		{
			j--;                                            //langkah algoritma no 8
			cmp_count++;
		}
		cmp_count++;

		// if the greater element is on the left the elemnt 
		cmp_count++;
		if (i < j)           //langkah algoritma no 9
		{
			//swap the ekemnt at index 1 whit the element at index j
			swap(i, j);
			mov_count++;
			
		}
		
	}   
	//j now contain the indx of the last elemnt in the sorted list 
	if (low < j)               //Langkah Algoritma No 11
	{
		//move the pivot to its correct position in the list
		swap(low, j);
		mov_count++;
	}
	//short the list on the left of pivot using quik short 
	q_short(low, j - 1);       //Langkah Algoritma No 12

	//short the list on the left of pivot using quik short 
	q_short( j + 1, high);       //Langkah Algoritma No 13


}
void display() {
	cout << "\n===========================" << endl;
	cout << "Sorted Array" << endl;
	cout << "\n===========================" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n\nNumber of comprasion: " << cmp_count << endl;
	cout << "Number of data movemnt: " << mov_count << endl;
}

int main()
{
	input();
	q_short(0, n - 1);
	display();
	system("pause");

	return 0;

}