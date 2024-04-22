#include <iostream>
using namespace std;

int search(int array[25], int search_num)
{
	int mid, left = 0, right = 25 - 1;
	while (array[left] <= search_num && array[right] >= search_num)
	{
		mid = left + ((search_num - array[left]) * (right - left)) /
			(array[right] - array[left]);
		if (array[mid] < search_num)
		{
			left = mid + 1;
		}
		else if (array[mid] > search_num)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
			break;
		}
	}

}

int main()
{
	int search_num, pos,  array[] = { 1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99,101,111,121,131,141,151,161};
	cout << "Enter the number that you are searching: ";
	cin >> search_num;

	pos = search(array,search_num);

	cout << "Number  " << search_num << " is on " << pos << " position" << endl;
}