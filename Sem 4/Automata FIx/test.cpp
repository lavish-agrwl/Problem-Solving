#include<iostream>
using namespace std;
void sortString(int len, int* arr)
{
    int i, max, location, temp, j, k;
    if (len%2 == 0) // error in this line
    {
        for (i = 0; i < len; i++)
        {
            max = arr[i];
            location = i;
            for (j = i; j < len; j++)
                if (max < arr[j]) // error in this line
                {
                    max = arr[j];
                    location = j;
                }
            temp = arr[i];
            arr[i] = arr[location];
            arr[location] = temp;
        }
    }
    else
    {
        for (i = 0; i < len; i++)
        {
            max = arr[i];
            location = i;
            for (j = i; j < len; j++)
                if (max > arr[j]) // error in this line
                {
                    max = arr[j];
                    location = j;
                }
            temp = arr[i];
            arr[i] = arr[location];
            arr[location] = temp;
        }
    }
}
int main(){
    int arr[] = {231,2312,412,43534662,342353,514,25,241,23};
    int len = 9;
    sortString(len, arr);
    for(int i = 0; i< len; i++){
        cout << arr[i] << endl;
    }
}