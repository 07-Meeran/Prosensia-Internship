#include <iostream>
using namespace std;

int main() {
    int arr[5];

    // Input 5 numbers
    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Calculate sum and average
    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum += arr[i];
    float avg = (float)sum / 5;

    // Find max and min with position
    int max = arr[0], min = arr[0], maxPos = 0, minPos = 0;
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxPos = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            minPos = i;
        }
    }

    // Reorder even first, then odd
    int newArr[5], index = 0;
    for (int i = 0; i < 5; i++)
        if (arr[i] % 2 == 0)
            newArr[index++] = arr[i];
    for (int i = 0; i < 5; i++)
        if (arr[i] % 2 != 0)
            newArr[index++] = arr[i];

    // Output results
    cout << "\nSum: " << sum << endl;
    cout << "Average: " << avg << endl;
    cout << "Maximum: " << max << " at position " << maxPos + 1 << endl;
    cout << "Minimum: " << min << " at position " << minPos + 1 << endl;

    cout << "Reordered Array (Even First): ";
    for (int i = 0; i < 5; i++)
        cout << newArr[i] << " ";
    cout << endl;

    return 0;
}
