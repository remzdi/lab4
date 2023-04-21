#pragma once
#include <iostream>

using namespace std;
class boolean_vector{
private:
    unsigned short size;
    int* coords;
public:
    boolean_vector(int* coords, unsigned short size);
    ~boolean_vector();


    // Overload the conjunction operator for Boolean vector components
    boolean_vector operator && (const boolean_vector& other);

    // Overload the inversion operator for Boolean vector components
    boolean_vector operator ! ();

    void ShowCoords() ;
    // Getter for size
    unsigned short getSize() const;
// Getter for coords
    int* getCoords() const ;
    int getWeight() const;
};
