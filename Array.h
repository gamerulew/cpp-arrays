//
// Created by pedro on 16/04/2022.

#include <vector>

using namespace std;


class Array {
private:
    vector<int> array;
public:
    bool addInt(int number) {
        if (findIndex(number) == -1) {
            array.push_back(number);
            return true;
        }
        return false;
    }

    bool removeInt(int number) {
        int index = findIndex(number);
        if (index >= 0) {
            array.erase(array.begin() + index);
            return true;
        }
        return false;
    }

    int findIndex(int number) {
        for (int i = 0; i < array.size(); i++) {
            if (array.at(i) == number) {
                return i;
            }
        }
        return -1;
    }


    vector<int> generateCopy() {
        vector<int> copy;
        for (int i = 0; i < array.size(); i++) {
            copy.push_back(array[i]);
        }
        return copy;
    }

    bool changeIndex(int number, int anotherNumber) {
        int currentNumberIndex = findIndex(number);
        int anotherNumberIndex = findIndex(anotherNumber);
        if (currentNumberIndex > -1 && anotherNumberIndex > -1) {
            array[currentNumberIndex] = anotherNumber;
            array[anotherNumberIndex] = number;
            return true;
        }
        return false;
    }

    bool revert() {
        int j = 0;
        if (array.size() > 0) {
            try {
                for (int i = array.size() - 1; i > (array.size() / 2); i--) {
                    int number = array[j];
                    array[j] = array[i];
                    array[i] = number;
                    j++;
                }
                return true;
            } catch (...) {
                return false;
            }
        } else {
            return false;
        }

    }

    bool clear() {
        try {
            array.clear();
            return true;
        } catch (...) {
            return false;
        }

    }

    void fill(int maxIndex = 100) {
        
        for (int i = 0; i < maxIndex; i++) {
            array.push_back(i);
        }
    }
};