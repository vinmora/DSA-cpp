#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

void most_occurred_number(int nums[], int size) {
    unordered_map<int, int> freq_map;

    // count frequency of each number in the array
    for (int i = 0; i < size; i++) {
        freq_map[nums[i]]++;
    }

    // find maximum frequency
    int max_freq = 0;
    for (auto& p : freq_map) {
        if (p.second > max_freq) {
            max_freq = p.second;
        }
    }

    // find number(s) with maximum frequency
    vector<int> most_frequent_numbers;
    for (auto& p : freq_map) {
        if (p.second == max_freq) {
            most_frequent_numbers.push_back(p.first);
        }
    }

    // print result
    cout << "Most occurred number(s): ";
    for (int i = 0; i < most_frequent_numbers.size(); i++) {
        cout << most_frequent_numbers[i] << " ";
    }
    cout << endl;
}

int main() {
    int nums[] = {53, 32, 56, 2, 67, 88, 99, 100, 52, 1, 100, 100, 100, 100, 100, 108, 99, 99, 99, 99, 99, 108, 108};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    most_occurred_number(nums, n);

    return 0;
}
