#include <cstdlib>
#include <getopt.h>
#include <iostream>
#include <string>

using namespace std;

static long comparisons = 0;
static long swaps = 0;

void swap(int* a, int* b)
{
    // add code here
}

void selectionSort(int* first, int* last)
{
    // add code here
}

void insertionSort(int* first, int* last)
{
    // add code here
}

void quickSort(int* first, int* last)
{
    // add code here
}

int main(int argc, char** argv)
{
    string algorithm = "selection";
    string dataset = "random";

    for (int c; (c = getopt(argc, argv, "ravqsin")) != -1;) {
        switch (c) {
        case 'r':
            dataset = "random";
            break;
        case 'a':
            dataset = "sorted";
            break;
        case 'v':
            dataset = "reverse";
            break;
        case 'q':
            algorithm = "quicksort";
            break;
        case 's':
            algorithm = "selection";
            break;
        case 'i':
            algorithm = "insertion";
            break;
        case 'n':
            algorithm = "none";
            break;
        }
    }
    argc -= optind;
    argv += optind;

    const int size = argc > 0 ? atoi(argv[0]) : 10000;
    int* data = new int[size];

    if (dataset == "sorted") {
        for (int i = 0; i < size; ++i) {
            data[i] = i;
        }
    }
    else if (dataset == "reverse") {
        for (int i = 0; i < size; ++i) {
            data[i] = size - i - 1;
        }
    }
    else if (dataset == "random") {
        for (int i = 0; i < size; ++i) {
            data[i] = rand() % size;
        }
    }

    if (algorithm == "quicksort") {
        quickSort(data, data + size);
    }
    else if (algorithm == "selection") {
        selectionSort(data, data + size);
    }
    else if (algorithm == "insertion") {
        insertionSort(data, data + size);
    }

    for (int i = 1; i < size; i++) {
        if (data[i] < data[i - 1]) {
            cout << "Oops!" << '\n';
            exit(1);
        }
    }

    cout << "OK" << '\n';
    cout << "Algorithm:   " << algorithm << '\n';
    cout << "Data set:    " << dataset << '\n';
    cout << "Size:        " << size << '\n';
    // Uncomment for level 3 and 4
    // cout << "Comparisons: " << comparisons << '\n';
    // cout << "Swaps:       " << swaps << '\n';

    delete[] data;
    return 0;
}
