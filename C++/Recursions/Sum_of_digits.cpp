# include <iostream>

using namespace std;

int sumOfDigits(int);

/*Program to find the sum of digits of a number using recursion*/

int main(){
    cout << "Please enter the number: ";
    int number;
    cin >> number;
    cout << "\nThe sum of digits using recursion is: " << sumOfDigits(number) << "\n";
}

int sumOfDigits(int n){
    if(n == 0){
        return 0;
    }
    return n%10 + sumOfDigits(n/10);
}
