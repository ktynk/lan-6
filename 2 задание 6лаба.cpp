

#include <iostream>
using namespace std;
int main()
{
    const int n = 3;           // число строк
    const int  m = 4;           // число столбцов
    int** nums = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) 
    {
        nums[i] = (int*)malloc(m * sizeof(int));
    }

    int numers[n][m]
    { { 1,2,0,3 },
   { 3, 11, 3, 2 },
   { 2, 0, 1, 1 } };
    int count = 0;
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {
            *(*(nums + i) + j) = numers[i][j];
        }
    }
    for (int j = 0; j < m; j++)
    {
        bool Zero = false;
        for (int i = 0; i < n; i++)
        {
            if (*(*(nums + i) + j) == 0)
            {
                Zero = true;
                break;
            }


        }
        if (!Zero)
        {
            count++;
            cout << "stolbec " << count << "bez 0: ";
            for (int i = 0; i < 3; i++)
            {
                cout << *(nums+i) << " ";
            }
            cout << *(nums + j)<< endl;
        }
    }
    cout << "Kolichestvo stolbcov bez 0: " << count << endl;
    delete[] nums;
    nums = nullptr;
}