#include <iostream>
#include <vector>

using namespace std;

int merge(vector<int>& arr, int left, int mid, int right) {
    int inversions = 0;
    vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inversions += (mid - i + 1); // Counting inversions
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (int idx = left, t = 0; idx <= right; ++idx, ++t) {
        arr[idx] = temp[t];
    }

    return inversions;
}

int mergeSort(vector<int>& arr, int left, int right) {
    int invCount = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;

        invCount += mergeSort(arr, left, mid);
        invCount += mergeSort(arr, mid + 1, right);

        invCount += merge(arr, left, mid, right);
    }
    return invCount;
}

int countViolations(vector<int>& nums) {
    return mergeSort(nums, 0, nums.size() - 1);
}

int main() {
    int n;
    cout << "Enter the number of integers in the set: ";
    cin >> n;

    vector<int> nums(n);
    
    cout << "Enter the integers in the set:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int violations = countViolations(nums);

    cout << "Total number of violations: " << violations << endl;

    return 0;
}
