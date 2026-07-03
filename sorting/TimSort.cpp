#include <bits/stdc++.h>
using namespace std;

const int RUN = 32;

// Insertion Sort
void insertionSort(vector<int>& arr, int left, int right) {
    for (int i = left + 1; i <= right; i++) {
        int temp = arr[i];
        int j = i - 1;

        while (j >= left && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

// Merge function
void merge(vector<int>& arr, int l, int m, int r) {
    int len1 = m - l + 1;
    int len2 = r - m;

    vector<int> left(len1), right(len2);

    for (int i = 0; i < len1; i++)
        left[i] = arr[l + i];

    for (int i = 0; i < len2; i++)
        right[i] = arr[m + 1 + i];

    int i = 0, j = 0, k = l;

    while (i < len1 && j < len2) {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    while (i < len1)
        arr[k++] = left[i++];

    while (j < len2)
        arr[k++] = right[j++];
}

// TimSort
void timSort(vector<int>& arr) {
    int n = arr.size();

    // Sort individual runs using insertion sort
    for (int i = 0; i < n; i += RUN)
        insertionSort(arr, i, min(i + RUN - 1, n - 1));

    // Merge runs
    for (int size = RUN; size < n; size *= 2) {

        for (int left = 0; left < n; left += 2 * size) {

            int mid = min(left + size - 1, n - 1);
            int right = min(left + 2 * size - 1, n - 1);

            if (mid < right)
                merge(arr, left, mid, right);
        }
    }
}

int main() {
    vector<int> arr = {5, 21, 7, 23, 19, 10, 2, 1, 9, 8};

    timSort(arr);

    for (int x : arr)
        cout << x << " ";
}