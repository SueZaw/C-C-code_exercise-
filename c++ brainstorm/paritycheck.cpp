#include <iostream>
using namespace std;
int sum = 0;
int res = 0;
int arr[7]{};
int arr2[8]{ };
void paritycheck() {
    for (int i = 0; i < 7; i++) {
        std::cin >> arr[i];
        if (arr[i] == 0 || arr[i] == 1) {
            sum = sum + arr[i];
        }
        else {
            std::cout << "can't process!";
            break;
        }

    }
    std::cout << endl;
    res = sum % 2;

    if (res == 0) {
        arr2[0] = 0;
        for (int j = 0; j < 7; j++) {
            arr2[j + 1] = arr[j];
        }
        for (int l = 0; l < 8; l++) {

            std::cout << arr2[l];
        }
        std::cout << endl << "EVEN parity check :completed" << endl << "Correct!" << "\n" << "data can receive now" << endl;
    }


  else  if (res != 0) {
        arr2[0] = 1;
        for (int j = 0; j < 7; j++) {
            arr2[j + 1] = arr[j];
        }
        for (int l = 0; l < 8; l++) {

            std::cout << arr2[l];
        }
        std::cout << endl << "ODD parity check : completed" << endl << "Correct!" << "\n" << "data can receive now" << endl;

    }
}