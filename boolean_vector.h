#pragma once
#include <iostream>

using namespace std;
class boolean_vector{
private:
    unsigned short size;
    int* coords;
public:
    boolean_vector();
    boolean_vector(int* coords, unsigned short size);
    boolean_vector(unsigned short size);
    boolean_vector(const boolean_vector& other);
    ~boolean_vector();


    // Overload the conjunction operator for Boolean vector components
    boolean_vector operator && (const boolean_vector& other);

    // Overload the inversion operator for Boolean vector components
    boolean_vector operator ! ();

    void ShowCoords() ;

    // Setter
    void setCoord(unsigned short index, int value);

    // Getters
    unsigned short getSize() const;
    int getWeight() const;
};
