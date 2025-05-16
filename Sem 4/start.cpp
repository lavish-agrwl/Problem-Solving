#include<iostream>

int main()

{

    int starting_point, ending_point, arr[20], length, j;

    scanf("%d %d %d", &length, &starting_point, &ending_point);

    for (j = 0; j < length; j++)

    {

        scanf("%d", &arr[j]);
    }

    for (j = 0; j < length; j++)

    {

        if (arr[j] > starting_point && arr[j] < ending_point)

        {

            printf("%d ", j);
        }
    }

    return 0;
}
