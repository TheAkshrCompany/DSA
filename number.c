#include <stdio.h>

int main()
{
    int num = 0;
    int arr[4] = {12,34,56,9};
    int arr1[sizeof(arr) / 4];
    for (int i = 0; i < sizeof(arr) / 4 - 1; i++) // sorting the initial array
    {
        for (int j = 0; j < sizeof(arr) / 4 - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                num = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = num;
            }
        }
    }
    num = 0;
    for (int i = 0; i < sizeof(arr) / 4; i++) // getting first digit of each number
    {
        num = arr[i];
        while (num > 10) // do till num greater than  0
        {
            int mod = num % 10; // split last digit from number

            num = num / 10; // divide num by 10. num /= 10 also a valid one
        }
        arr1[i] = num;
    }
    for (int i = 0; i < sizeof(arr) / 4 - 1; i++) // sorting the generated array with initial array
    {
        for (int j = 0; j < sizeof(arr) / 4 - 1; j++)
        {
            if (arr1[j] < arr1[j + 1])
            {
                num = arr1[j + 1];
                arr1[j + 1] = arr1[j];
                arr1[j] = num;

                num = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = num;
            }
        }
    }
    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}
