#include <iostream>
#include <math.h>


using namespace std;

class Math {
public:
    int Summ(int a, int b){
        int c = a + b;
    }
    int Razn(int a, int b){
        int c = a - b;
    }
    int Equal(int a, int b){
        int c = a * b;
    }
    int Dele(int a, int b){
        int c = a / b;
    }

    void MainMenu(){
        int firstN, secondN;
        cout << "Enter first number: ";
        cin >> firstN;
        cout << "Enter second number: ";
        cin >> secondN;
        int operand;
        cout << "Choose operand: \n";
        cout << "1 === +: \n2 === -: \n3 === *: \n4 === /: \nChoose: ";
        cin >> operand;

        switch (operand) {
        case 1:
        {
            int rez = Summ(firstN,secondN);
            cout << "Summ: " << rez;
            break;
        }
        case 2:
        {
            int rez = Razn(firstN,secondN);
            cout << "Razn: " << rez;
            break;
        }
        case 3:
        {
            int rez = Equal(firstN,secondN);
            cout << "Equal: " << rez;
            break;
        }
        case 4:
        {
            int rez = Dele(firstN,secondN);
            cout << "Dele: " << rez;
            break;
        }
        default:
            break;
        }

    }
};

int main() {

    Math math;
    math.MainMenu();
    return 0;

}
