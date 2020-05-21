#include <iostream>

using namespace std;

int main(){

    char c_or_f;
    cout << "Would you like to test Celsius (C) or Fahrenheit (F)?: ";
    cin >> c_or_f;

    if(c_or_f == 'C'){
        int temp_in_c;
        cout << "Please enter a temperature in Celsius: ";
        cin >> temp_in_c;

        if(temp_in_c <= 0){
            cout << "That's really cold.";
        } 
        else if(temp_in_c > 0 && temp_in_c <= 19){
            cout << "That's a very nice temperature!";
        }      
        else{  // Anything > 19
            cout << "That's really hot!";
        }
    }

    else if(c_or_f == 'F'){
        int temp_in_f;
        cout << "Please enter a temperature in Fahrenheit";
        cin >> temp_in_f;

        if(temp_in_f <= 32){
            cout << "That's cold!";
        }
        else if(temp_in_f > 32 && temp_in_f <= 75){
            cout << "That sounds lovely!";
        }
        else{ //Anything >75
            cout << "Bust out that AC unit kids";
        }

    }

    else{ //Any input that is not C or F
        cout << "Sorry, that input was not valid";
    }

    return 0;
}
