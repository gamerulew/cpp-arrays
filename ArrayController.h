//
// Created by pedro on 16/04/2022.
//

#ifndef ARRAYS_ARRAYCONTROLLER_H
#define ARRAYS_ARRAYCONTROLLER_H

#include "Array.h"

class ArrayController {
private:
    Array array;
public:
    bool addInt(int number) {
        return array.addInt(number);
    }

    bool removeInt(int number) {
        return array.removeInt(number);
    }

    vector<int> getArray() {
        return array.generateCopy();
    }

    bool changeIndex(int number, int anotherNumber) {
        return array.changeIndex(number, anotherNumber);
    }

    bool revert() {
        return array.revert();
    }

    bool clear() {
        return array.clear();
    }

    void fill(int maxIndex = 100) {
        array.fill(maxIndex);
    }
};


#endif //ARRAYS_ARRAYCONTROLLER_H
