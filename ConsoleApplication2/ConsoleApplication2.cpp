#include <iostream>
#define SIZE 10

using namespace std;

int main()
{
    srand(time(NULL));
    int arr_1[SIZE], arr_2[SIZE];
    int* parr_1 = arr_1;
    int* parr_2 = arr_2;
    for (int i = 0; i < SIZE; i++)
    {
        *(parr_1 + i) = rand() % 11;
        cout << *(parr_1 + i) << "  ";
    }
    cout << endl;

    for (int i = 0; i < SIZE; i++)
    {
        *(parr_2 + i) = *(parr_1 + i);
        cout << *(parr_2 + i) << "  ";
    }

    for (int i = SIZE; i > 0; i--)
    {
        *(parr_2 + i) = *(parr_1 + i);
        cout << *(parr_2 + i) << "  ";  
    }
    cout << endl;

    for (int i = 0; i < SIZE; i++)
    {
        *(parr_2 + (SIZE - i - 1)) = *(parr_1 + i);
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << *(parr_2 + i) << "  ";
    }
}