#include <iostream>
using namespace std;

int main()
{
    int arr_begin[15] = { 0 };
    int* arr_end, count = 0;

    arr_begin[0] = 7;
    cout << arr_begin[0] << "  ";
    for (int i = 1;i < 15;i++)
    {
        arr_begin[i] = arr_begin[i - 1] + 12;
        cout << arr_begin[i] << "  ";
    }

    for (int i = 0;i < 15;i++)
    {
        int sum = 0, a;
        a = arr_begin[i];
        while (a)
        {
            sum += a % 10;
            a /= 10;
        }
        sum == 10 ? sum : count++;
    }

    arr_end = new int[count];
    int j = 0;
    for (int i = 0;i < 15;i++)
    {
        int sum = 0, a;
        a = arr_begin[i];
        while (a)
        {
            sum += a % 10;
            a /= 10;
        }
        sum == 10 ? sum : arr_end[j++] = arr_begin[i];
    }
    cout << "\n";
    for (int i = 0;i < count;i++)
        cout << arr_end[i] << "  ";

    system("pause");
    return 0;
}