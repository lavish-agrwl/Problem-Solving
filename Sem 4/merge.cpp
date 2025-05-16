#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int j = 0;
    for (int i = 0; i < (n); i++)
    {
        // Write your code here.
        nums1.push_back(nums2[i]);
    }
    sort(nums1.begin(), nums1.end());
}
int main(){
    vector<int> num1 = {1,12,3,14,5}, num2 = {32,12324,452,1,23,43};
    merge(num1, num1.size(), num2, num2.size());
    for(int i: num1){
        cout << i << endl;
    }
}
