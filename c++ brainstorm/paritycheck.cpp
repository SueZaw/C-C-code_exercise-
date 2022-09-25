#include <iostream>
//#include <stdio.h>
using namespace std;
int sum = 0; //total addition of user input binaries
int res = 0; // the result of sum divided by 2
int arr[7]{}; //user input binary
int arr2[8]{ }; //input parity num

void paritycheck() {
    cout << "Enter Bits" << endl;
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
        //scanf("%d",arr[i]);
        if (arr[i] == 0 || arr[i] == 1) {   //checking if it is binary or not
            sum = sum + arr[i];
        }
        else {
            cout << "can't process!";
            break;
        }

    }
    cout << endl;
    res = sum % 2;

    if (res == 0) {  
        arr2[0] = 0;
        for (int j = 0; j < 7; j++) {
            arr2[j + 1] = arr[j];
        }
        for (int l = 0; l < 8; l++) {
            
            cout << arr2[l];
            // printf("%d",arr[1]);
        }
        cout << endl << "EVEN parity check :completed" << endl << "Correct!" << "\n" << "data can receive now" << endl;
    //printf("EVEN parity check :completed \n", "Correct \n", "data can receive now");
    }


  else  if (res != 0) {
        arr2[0] = 1;
        for (int j = 0; j < 7; j++) {
            arr2[j + 1] = arr[j];
        }
        for (int l = 0; l < 8; l++) {

            cout << arr2[l];
        }
        cout << endl << "ODD parity check : completed" << endl << "Correct!" << "\n" << "data can receive now" << endl;
        //printf("ODD parity check :completed \n", "Correct \n", "data can receive now");
    }
}