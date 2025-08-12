#include <iostream>
using namespace std;

int main() {
    int a[10][10], transpose[10][10];
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    // Input original matrix
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }

    // Transpose logic
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = a[i][j];  // Swap rows with columns
        }
    }

    // Display transpose
    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < cols; i++) { // Notice: loop over cols now
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
