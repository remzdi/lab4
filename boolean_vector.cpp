#include "boolean_vector.h"
#include <iostream>

using namespace std;
boolean_vector::boolean_vector(int* coords, unsigned short size) {
    this->size = size;
    this->coords = new int[size];
    for (unsigned short i = 0; i < size; i++) {
        this->coords[i] = coords[i];
    }
}

boolean_vector::~boolean_vector() {
    delete[] coords;
}

boolean_vector boolean_vector::operator && (const boolean_vector& other) {
    int* newCoords = new int[size];
    for (unsigned short i = 0; i < size; ++i) {
        newCoords[i] = coords[i] && other.coords[i];
    }
    boolean_vector result(newCoords, size);
    delete[] newCoords;
    return result;
}

boolean_vector boolean_vector::operator ! () {
    int* newCoords = new int[size];
    for (unsigned short i = 0; i < size; ++i) {
        newCoords[i] = !coords[i];
    }
    boolean_vector result(newCoords, size);
    delete[] newCoords;
    return result;
}

void boolean_vector::ShowCoords() {
    for (unsigned i = 0; i < size; ++i) {
        cout << coords[i] << " ";
    }
    cout << endl;
}

unsigned short boolean_vector::getSize() const {
    return size;
}

int* boolean_vector::getCoords() const {
    return coords;
}

int boolean_vector::getWeight() const {
    int weight = 0;
    for (int i = 0; i < size; i++) {
        if (coords[i] == 1) {
            weight++;
        }
    }
    return weight;
}
