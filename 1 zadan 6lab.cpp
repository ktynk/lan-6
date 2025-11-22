#include<iostream>
#include<cmath> 
#include<cstdlib> 
using namespace std;

int main()
{
    int size;
    cout << "razmer massiva ";
    cin >> size;
    if (size <= 0)
    {
        cout << "invalid";
        return 1;
    }

    int* dynamoarr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "vvedite element ";
        cin >> *(dynamoarr + i);
    }

   
    int maxmodul = abs(*(dynamoarr));
    for (int i = 1; i < size; i++)
    {
        if (abs(*(dynamoarr + i)) > abs(maxmodul))
        {
            maxmodul = *(dynamoarr + i);
        }
    }
    cout << "max " << maxmodul << endl;

    // Поиск суммы между первым и вторым положительными элементами
    int sum = 0;
    int first_ind = -1;  // Инициализация
    int second_ind = -1; // Инициализация

    for (int i = 0; i < size; i++) {
        if (*(dynamoarr + i) > 0) {
            first_ind = i;
            break;
        }
        if (first_ind == -1) return 0;
        for (int i = first_ind + 1; i < size; i++) {
            if(*(dynamoarr + i) > 0) {
                second_ind = i;
                break;
            }
        }
        if (second_ind == -1) return 0;
        for (int i = first_ind + 1; i < second_ind; i++) {
            sum += *(dynamoarr + i);
        }
        cout << sum;
    delete[] dynamoarr;
    dynamoarr = nullptr;
    return 0;
}