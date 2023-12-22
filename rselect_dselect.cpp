#include <algorithm>
#include <cstdint>
#include <vector>
#include <chrono>
#include <iostream>

int64_t partition(std::vector<int64_t>& arr, int low, int high) {
    int64_t pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

int64_t rselect(std::vector<int64_t>& arr, int low, int high, int k) {
    if (low == high) return arr[low];

    int64_t pivotIndex = partition(arr, low, high);
    int rank = pivotIndex - low + 1;

    if (k == rank) return arr[pivotIndex];
    else if (k < rank) return rselect(arr, low, pivotIndex - 1, k);
    else return rselect(arr, pivotIndex + 1, high, k - rank);
}

// Функция для нахождения k-го порядкового статистического элемента
int64_t dselect(std::vector<int64_t>& arr, int low, int high, int k) {
    if (k > 0 && k <= high - low + 1) {
        // Находим индекс опорного элемента после разбиения
        int pivotIndex = partition(arr, low, high);

        // Если опорный элемент - искомый элемент
        if (pivotIndex - low == k - 1) {
            return arr[pivotIndex];
        }
        // Если k меньше, чем индекс опорного элемента, рекурсивно ищем в левой части
        if (pivotIndex - low > k - 1) {
            return dselect(arr, low, pivotIndex - 1, k);
        }
        // Иначе ищем в правой части
        return dselect(arr, pivotIndex + 1, high, k - pivotIndex + low - 1);
    }

    // В случае некорректного значения k
    return -1;
}

void RSelect_Test(std::vector<int64_t> &data) {
    auto start_time_rselect = std::chrono::high_resolution_clock::now();
    int64_t result_rselect = rselect(data, 0, data.size() - 1, data.size()/2);
    auto end_time_rselect = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_time_rselect = end_time_rselect - start_time_rselect;

    std::cout << "RSelect Test Result: " << result_rselect << ", Time: " << elapsed_time_rselect.count() << " seconds\n";
}

void DSelect_Test(std::vector<int64_t> &data) {
    auto start_time_dselect = std::chrono::high_resolution_clock::now();
    int64_t result_dselect = dselect(data, 0, data.size() - 1, data.size()/2);
    auto end_time_dselect = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_time_dselect = end_time_dselect - start_time_dselect;

    std::cout << "DSelect Test Result: " << result_dselect << ", Time: " << elapsed_time_dselect.count() << " seconds\n";
}