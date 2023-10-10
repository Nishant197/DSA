#include<iostream>
using namespace std;

int reverseNumber(int n, int reversedNumber)       //if we don't want to use parameter we can do a static or global variable
{
       //static int reversedNumber = 0;  if we dont need parameter
    if (n == 0)
    {
        return reversedNumber; // Base case: Return the reversed number when n becomes 0.
    }

    int lastDigit = n % 10;
    reversedNumber = reversedNumber * 10 + lastDigit;

    return reverseNumber(n / 10, reversedNumber);
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    int reversed = reverseNumber(number, 0);
    cout << "The reversed number is " << reversed;

    return 0;
}