#include <iostream>
#include <sys/time.h>
using namespace std;

void insertion_sort(int a[], int n)
{
    int i, j, temp;
    for (j = 1; j < n; j++)
    {
        temp = a[j];
        i = j - 1;
        while (i >= 0 && a[i] > temp)
        {
            a[i + 1] = a[i];
            i = i - 1;
        }
        a[i + 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    freopen("bestcase.txt", "r", stdin);
    freopen("bestcase_output.txt", "w", stdout);

    int n;
    cout << "Enter the size of array\n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    double time_spent = 0.0;
    struct timeval timer_start, timer_end;
    gettimeofday(&timer_start, NULL);

    insertion_sort(arr, n);

    gettimeofday(&timer_end, NULL);
    time_spent = timer_end.tv_sec - timer_start.tv_sec + (timer_end.tv_usec - timer_start.tv_usec) / 1000000.0;
    printf("\nTime spent: %f sec\n", time_spent);
    return 0;
}
