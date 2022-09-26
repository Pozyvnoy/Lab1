#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n = 4, m = 0;

    double** a = new double* [n];
    for (int i = 0; i < n; i++)
        a[i] = new double[n];
    double* b = new double[n * n];

    cout << "Matrix a:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(a + i) + j) = sqrt(i + j + 1);
            *(b + m++) = *(*(a + i) + j);
            cout << setprecision(2) << fixed << *(*(a + i) + j) << " ";
        }
        cout << endl;
    }

    cout << "Matrix b:\n";
    for (int i = 0; i < n * n; i++)
        cout << setprecision(4) << fixed << *(b + i) << " ";
    cout << endl;

    for (int i = 0; i < n; i++)
        delete[] a[i];
    delete[] a;
    delete[] b;
    system("pause");
    return 0;
}