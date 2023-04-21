#include "functions.h"
#include "boolean_vector.h"

void check_boolean_vectors_size(const boolean_vector& B1, const boolean_vector& B2) {
    if (B1.getSize() != B2.getSize()) {
        cout << "Boolean vectors B1 and B2 have different sizes!" << endl;
        exit(1);
    }
}
// Helper function to get input for a Boolean vector
boolean_vector get_input_boolean_vector(int vectorNumber) {
    int size;
    char er, ch;
    do {
        er = 0;
        cout << "Enter the size of Boolean vector B" << vectorNumber << ": ";
        scanf_s("%d%c", &size, &ch);
        cout << endl;
        if ((ch != '\n') || (size < 2)) {
            er = 1;
            fflush(stdin);
            printf("Incorrect input size \n");
        }
    } while (er);

    int* coords = new int[size];
    for (int i = 0; i < size; i++) {
        int num;
        do {
            cout << "Enter the " << i+1 << "th element of Boolean vector B" << vectorNumber << " (0 or 1): ";
            cin >> num;
            cout << endl;
            if (cin.fail() || num < 0 || num > 1) {
                cout << "Invalid input! Please enter 0 or 1." << endl;
                cin.clear();
                while (cin.get() != '\n') {} // discard input
                break;
            }
        } while (num < 0 || num > 1);
        coords[i] = num; // store the input in the array if it is 0 or 1
    }
    boolean_vector result(coords, size);
    delete[] coords;
    return result;
}
