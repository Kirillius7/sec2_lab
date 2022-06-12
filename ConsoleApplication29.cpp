//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//
//class Authors
//{
//	string surname;
//	string name;
//	string patronymic;
//	int date;
//	int number;
//public:
//	friend void FillArray(Authors* arr, const int size);
//	friend void ShowArray(Authors* arr, const int size);
//	friend void push(Authors*& arr, int& size, string data1, string data2, string data3, int value1, int value2);
//	friend void pop(Authors*& arr, int& size, string data1, string data2, string data3, int value1, int value2);
//
//};
//
//void FillArray(Authors* arr, const int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Input the surname: ";
//		cin >> arr[i].surname;
//		cout << "Input the name: ";
//		cin >> arr[i].name;
//		cout << "Input the patronymic : ";
//		cin >> arr[i].patronymic;
//		cout << "Input the date: ";
//		cin >> arr[i].date;
//		cout << "Input the number: ";
//		cin >> arr[i].number;
//	}
//}
//
//void ShowArray(Authors* arr, const int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << "The surname ";
//		cout << arr[i].surname << endl;
//		cout << "The name ";
//		cout << arr[i].name << endl;
//		cout << "The patronymic ";
//		cout << arr[i].patronymic << endl;
//		cout << "The date ";
//		cout << arr[i].date << endl;
//		cout << "The number ";
//		cout << arr[i].number << endl;
//	}
//	cout << endl;
//}
//
//void push(Authors*& arr, int& size, string data1, string data2, string data3, int value1, int value2)
//{
//	Authors* newarray = new Authors[size + 1];
//	for (int i = 0; i < size; i++)
//	{
//		newarray[i].surname = arr[i].surname;
//		newarray[i].name = arr[i].name;
//		newarray[i].patronymic = arr[i].patronymic;
//		newarray[i].date = arr[i].date;
//		newarray[i].number = arr[i].number;
//	}
//	size++;
//	for (int i = size - 1; i < size; i++)
//	{
//		newarray[i].surname = data1;
//		newarray[i].name = data2;
//		newarray[i].patronymic = data3;
//		newarray[i].date = value1;
//		newarray[i].number = value2;
//	}
//	delete[] arr;
//	arr = newarray;
//}
//
//void pop(Authors*& arr, int& size, string data1, string data2, string data3, int value1, int value2)
//{
//
//	Authors* newarray = new Authors[size];
//	for (int i = 0; i < size; i++)
//	{
//		newarray[i].surname = arr[i].surname;
//		newarray[i].name = arr[i].name;
//		newarray[i].patronymic = arr[i].patronymic;
//		newarray[i].date = arr[i].date;
//		newarray[i].number = arr[i].number;
//	}
//
//
//	for (int i = 0; i < size; i++)
//	{
//		if (newarray[i].surname == data1 && newarray[i].name == data2 && newarray[i].patronymic == data3 && newarray[i].date == value1 && newarray[i].number == value2)
//		{
//			newarray[i].surname = newarray[i + 1].surname;
//			newarray[i].name = newarray[i + 1].name;
//			newarray[i].patronymic = newarray[i + 1].patronymic;
//			newarray[i].date = newarray[i + 1].date;
//			newarray[i].number = newarray[i + 1].number;
//			size--;
//		}
//
//	}
//
//}
//
//int main()
//{
//	int size = 2;
//	Authors* arr = new Authors[size];
//	FillArray(arr, size);
//	ShowArray(arr, size);
//
//	int choice;
//	do
//	{
//		cout << "Input 0 to continue";
//		cin >> choice;
//		if (choice == 1)
//		{
//			return 0;
//		}
//		else
//		{
//			string data1;
//			string data2;
//			string data3;
//			int value1;
//			int value2;
//			cin >> data1;
//			cout << endl;
//			cin >> data2;
//			cout << endl;
//			cin >> data3;
//			cout << endl;
//			cin >> value1;
//			cout << endl;
//			cin >> value2;
//			cout << endl;
//			int mean;
//			cout << "1 - to add this info" << endl;
//			cout << "2 - to remove this info" << endl;
//			cin >> mean;
//			if (mean == 1)
//			{
//				push(arr, size, data1, data2, data3, value1, value2);
//				ShowArray(arr, size);
//			}
//			else if (mean == 2)
//			{
//
//				pop(arr, size, data1, data2, data3, value1, value2);
//				ShowArray(arr, size);
//			}
//			else if (mean == 3)
//			{
//				return 0;
//			}
//		}
//	} while (choice == 0);
//	return 0;
//}
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Authors
{
    string surname;
    string name;
    string patronymic;
    int date;
    int number;
public:
    friend void FillArray(Authors* arr, const int size);
    friend void ShowArray(Authors* arr, const int size);
    friend void push(Authors*& arr, int& size, string data1, string data2, string data3, int value1, int value2);
    friend void pop(Authors*& arr, int& size, string data1, string data2, string data3, int value1, int value2);

};

void FillArray(Authors* arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Input the surname: ";
        cin >> arr[i].surname;
        cout << "Input the name: ";
        cin >> arr[i].name;
        cout << "Input the patronymic : ";
        cin >> arr[i].patronymic;
        cout << "Input the date: ";
        cin >> arr[i].date;
        cout << "Input the number: ";
        cin >> arr[i].number;
    }
}

void ShowArray(Authors* arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "The surname ";
        cout << arr[i].surname << endl;
        cout << "The name ";
        cout << arr[i].name << endl;
        cout << "The patronymic ";
        cout << arr[i].patronymic << endl;
        cout << "The date ";
        cout << arr[i].date << endl;
        cout << "The number ";
        cout << arr[i].number << endl;
    }
    cout << endl;
}

void push(Authors*& arr, int& size, string data1, string data2, string data3, int value1, int value2)
{
    Authors* newarray = new Authors[size + 1];
    for (int i = 0; i < size; i++)
    {
        newarray[i].surname = arr[i].surname;
        newarray[i].name = arr[i].name;
        newarray[i].patronymic = arr[i].patronymic;
        newarray[i].date = arr[i].date;
        newarray[i].number = arr[i].number;
    }
    size++;
    for (int i = size - 1; i < size; i++)
    {
        newarray[i].surname = data1;
        newarray[i].name = data2;
        newarray[i].patronymic = data3;
        newarray[i].date = value1;
        newarray[i].number = value2;
    }
    delete[] arr;
    arr = newarray;
}

void pop(Authors*& arr, int& size, string data1, string data2, string data3, int value1, int value2)
{

    Authors* newarray = new Authors[size];
    for (int i = 0; i < size; i++)
    {
        newarray[i].surname = arr[i].surname;
        newarray[i].name = arr[i].name;
        newarray[i].patronymic = arr[i].patronymic;
        newarray[i].date = arr[i].date;
        newarray[i].number = arr[i].number;
    }


    for (int i = 0; i < size; i++)
    {
        if (newarray[i].surname == data1 && newarray[i].name == data2 && newarray[i].patronymic == data3 && newarray[i].date == value1 && newarray[i].number == value2)
        {
            arr[i].surname = newarray[i + 1].surname;
            arr[i].name = newarray[i + 1].name;
            arr[i].patronymic = newarray[i + 1].patronymic;
            arr[i].date = newarray[i + 1].date;
            arr[i].number = newarray[i + 1].number;
            size--;
        }

    }

}

int main()
{
    int size = 2;
    Authors* arr = new Authors[size];
    FillArray(arr, size);
    ShowArray(arr, size);

    int choice;
    do
    {
        cout << "Input 0 to continue";
        cin >> choice;
        if (choice == 1)
        {
            return 0;
        }
        else
        {
            string data1;
            string data2;
            string data3;
            int value1;
            int value2;
            cout << "surname: ";
            cin >> data1;
            cout << endl;
            cout << "name: ";
            cin >> data2;
            cout << endl;
            cout << "patronymic: ";
            cin >> data3;
            cout << endl;
            cout << "date: ";
            cin >> value1;
            cout << endl;
            cout << "number: ";
            cin >> value2;
            cout << endl;
            int mean;
            cout << "1 - to add this info" << endl;
            cout << "2 - to remove this info" << endl;
            cin >> mean;
            if (mean == 1)
            {
                push(arr, size, data1, data2, data3, value1, value2);
                ShowArray(arr, size);
            }
            else if (mean == 2)
            {

                pop(arr, size, data1, data2, data3, value1, value2);
                ShowArray(arr, size);
            }
            else if (mean == 3)
            {
                return 0;
            }
        }
    } while (choice == 0);
    return 0;
}