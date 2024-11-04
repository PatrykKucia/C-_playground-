#include <iostream>
#include <vector>

// Funkcja pomocnicza do wymiany dwóch elementów
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Funkcja dzieląca tablicę i zwracająca indeks pivota
int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Wybór pivota (ostatni element)
    int i = low - 1; // Indeks elementu mniejszego od pivota

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++; // Zwiększ indeks elementu mniejszego od pivota
            swap(arr[i], arr[j]); // Wymiana
        }
    }
    swap(arr[i + 1], arr[high]); // Przenieś pivota na odpowiednią pozycję
    return i + 1; // Zwróć indeks pivota
}

// Funkcja implementująca algorytm quick sort
void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        // Znajdź indeks pivota
        int pi = partition(arr, low, high);

        // Rekurencyjne wywołanie dla lewego i prawego poddrzewa
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Funkcja pomocnicza do wypisywania tablicy
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();
    
    std::cout << "Tablica przed sortowaniem: ";
    printArray(arr);

    quickSort(arr, 0, n - 1);

    std::cout << "Tablica po sortowaniu: ";
    printArray(arr);
    return 0;
}
