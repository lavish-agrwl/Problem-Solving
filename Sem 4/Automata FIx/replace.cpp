#include<iostream>
using namespace std;
void replaceElements(int size, int *arr)
{
    int i, j;
    int sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    if (sum % 2 == 0)
    {
        i = 0;
        while (i < size)
        {
            arr[i] = 0;
            i += 1;
        }
    }
    else
    {
        j = 0;
        while (j < size)
        {
            arr[j] = 1;
            j += 1;
        }
    }
}
int main()
{
    int arr[] = {231, 2312, 412, 43534661, 342353, 514, 25, 241, 23};
    int len = 9;
    replaceElements(9, arr);
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
}