// Series Sums

#include<iostream>
#include <climits>

using namespace std;

int main() {

    cout << "Enter the number of elements in the array: ";
    
    int n;
    cin >> n;

    cout << "Enter the elements of the array: ";
    int nums[n];

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int max_sum = -1;

    for(int k = 0; k < n; k++) {
        int sum = nums[k], x = 1, j;

        for(int i = k + 1; i < n; i += x) {
            if ((i + x) < n) {
                for(j = i; j <= x + i; j++) {
                    sum += nums[j];
                }
                x++;
            }
        }

        if (sum > max_sum) {
            max_sum = sum;
        }
    }

    cout << "Maximum sum: " << max_sum << endl;

    return 0;
}
