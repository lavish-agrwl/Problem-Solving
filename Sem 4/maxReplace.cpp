#include<iostream>
void maxReplace(int size, int *inputList)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += inputList[i];
    }
    for (i = 0; i < size; i++)
    {
        inputList[i] = sum;
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", inputList[i]);
    }
}
int main(){
    int arr[] = {231, 2312, 412, 43534662, 342353, 514, 25, 241, 23};
    int len = 9;
    maxReplace(9, arr);
}