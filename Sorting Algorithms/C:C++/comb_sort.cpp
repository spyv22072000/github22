#include <iostream>
#include <vector>

void combSort(std::vector<int>& arr) {
    int n = arr.size();
    int gap = n;
    float shrink = 1.3;
    bool swapped = true;

    while (gap > 1 || swapped) {
        gap = static_cast<int>(gap / shrink);
        gap = std::max(1, gap);
        swapped = false;

        for (int i = 0; i < n - gap; ++i) {
            if (arr[i] > arr[i + gap]) {
                std::swap(arr[i], arr[i + gap]);
                swapped = true;
            }
        }
    }
}

int main() {
    std::vector<int> myVector = {64, 34, 25, 12, 22, 11, 90};

    combSort(myVector);

    std::cout << "Sorted array is: ";
    for (int num : myVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
