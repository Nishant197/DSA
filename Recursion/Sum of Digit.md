## Question :  
**Input:**
```
Enter a number: 12345
```

**Output:**
```
The sum of Digits in the Number 12345 is 15.
```
**Expliantion**
```
1+2+3+4+5 = 15
```

## Solution : 
```cpp
#include<iostream>
using namespace std;

int sumD(int n)
{
    
    if(n>0)
    {int rem = n%10;

    return rem+ sumD(n/10);
    }
}

int main()
{
    int number;
    cout<<"Enter the number :";
    cin>>number;

    int sum = sumD(number);
    cout<<"The sum of Digit in the Number  "<<sum;


    return 0;
}
```
