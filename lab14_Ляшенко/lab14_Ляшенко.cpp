#include <iostream>
using namespace std;
#include "windows.h"

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int array_size = 17;
	int array[array_size] = { 3, 4, 6, 8, 12, 15, 18, 20, 25, 33, 35, 39, 45, 49, 57, 60, 62 }; // оголошення одновимірного відсортованого масиву
	int search_num; // змінна для зберігання шуканого в масиві елемента
		cout << "Введіть елемент, який необхідно знайти в масиві"<<endl;
		cin >> search_num;

	for (int i = 0; i < array_size; i++)
	{
		cout << array[i] << " "; //виведення масиву
	}
	cout << endl;

	//інтерполяційний пошук
	int mid, left = 0, right = array_size - 1;
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
			cout << "Елемент " << search_num << " має індекс " << mid
				<< endl;
			break;
		}
	}
	if (!(array[left] <= search_num && array[right] >= search_num))
	{
		cout << "Елемента немає в масиві";
	}
}