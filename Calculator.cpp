#include<iostream>
#include<iomanip>
using namespace std;

void add(float a, float b){
    cout << "The sum of the numbers is: " << setprecision(3) << a+b;
}
void subtract(float a, float b){
    cout << "The subtraction of the numbers is: " << setprecision(3) << a-b;
}
void multiply(float a, float b){
    cout << "The multiplication of the numbers is: " << setprecision(3) << a*b;
}
void divide(float a, float b){
    cout << "The division of the numbers is: " << setprecision(3) << a/b;
}

int main(){
    int choice;
    float a, b;

    cout << "Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division and 5 for exit the process" << endl;
    while(1){
        cout << "\n\nEnter the choice:"<< endl;
        cin >> choice;
        if(choice==5) break;
        cout << "Enter the numbers:" << endl;
        cin >> a >> b;
        switch(choice){
            case 1:
                add(a, b);
                break;
            case 2:
                subtract(a, b);
                break;
            case 3:
                multiply(a, b);
                break;
            case 4:
                divide(a, b);
                break;
            default:
                cout << "Invalid choice. Try again!";
        }
    }
    return 0;
}
