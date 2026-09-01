#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T>
int binarySearch( T array[], int low, int high, const T& key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    double* A = new double[10];
    A[0] = -5.2;
    A[1] = -2.3;
    A[2] = 1.7;
    A[3] = 4.2;
    A[4] = 7;
    A[5] = 12;
    A[6] = 27;
    A[7] = 32;
    A[8] = 42;
    A[9] = 67;

    // Step 1: Implement Binary Search
    cout << binarySearch(A, 0, 9, 32.0) << endl;   // 7
    cout << binarySearch(A, 0, 9, -2.3) << endl;   // 1
    cout << binarySearch(A, 0, 9, 67.0) << endl;   // 9
    cout << binarySearch(A, 0, 9, 10.2) << endl;   // -1 (not found)

    // Step 2: Template your binary search
    string* B = new string[6];
    B[0] = "apple";
    B[1] = "banana";
    B[2] = "date";
    B[3] = "orange";
    B[4] = "orchid";
    B[5] = "pear";

    string key = "orange";
    cout << binarySearch(B, 0, 5, key) << endl;   // 3

    // Step 3: Spell-checker using a dictionary file when available
    vector<string> dictionary;
    ifstream input("largeDictionary.txt");

    if (input.is_open())
    {
        string word;
        while (input >> word)
        {
            dictionary.push_back(word);
        }
        input.close();
    }
    else
    {
        dictionary = {"apple", "banana", "date", "orange", "orchid",
                      "pear", "wolf", "grape", "mango", "lemon", "pear"};
    }

    sort(dictionary.begin(), dictionary.end());

    while (true)
    {
        cout << "Enter a word (or q to quit): ";
        string guess;
        cin >> guess;

        if (guess == "q" || guess == "Q")
        {
            break;
        }

        if (binarySearch(dictionary.data(), 0, static_cast<int>(dictionary.size()) - 1, guess) != -1)
        {
            cout << "Good job, that is a real word!" << endl;
        }
        else
        {
            cout << "Wrong! That is a misspelled word!" << endl;
        }
    }

    delete[] A;
    delete[] B;

    return 0;
}