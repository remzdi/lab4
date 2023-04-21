
#include <iostream>
#include "functions.h"
#include "boolean_vector.h"
using namespace std;
int main() {
    boolean_vector B1 = get_input_boolean_vector(1);
    cout << "B1 = ";
    B1.ShowCoords();
    boolean_vector complement = !B1;
    cout << "Complement of B1 = ";
    complement.ShowCoords();
    boolean_vector B2 = get_input_boolean_vector(2);
    cout << "B2 = ";
    B2.ShowCoords();

    check_boolean_vectors_size(B1, B2); 

    boolean_vector B3 = complement && B2;
    cout << "B3 = ";
    B3.ShowCoords();
    cout << "Weight of B3 = ";
    cout << B3.getWeight() << endl;
    return 0;

}
