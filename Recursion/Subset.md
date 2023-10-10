 **Input**
 ```{1, 2, 3}```
 
It will print all possible subsequences of that array. For example, it will print:


**Output :**
```All subsequences of the array are:
[ 1 2 3 ]
[ 1 2 ]
[ 1 3 ]
[ 1 ]
[ 2 3 ]
[ 2 ]
[ 3 ]
[ ]
```


```cpp
#include <iostream>
using namespace std;

void generateSubsequences(string input, string output, int index) {
    // Base case: If we have processed all characters of the input string
    if (index == input.length()) {
        // Print the generated subsequence
        cout << output << endl;
        return;
    }

    // Include the current character in the output subsequence
    generateSubsequences(input, output + input[index], index + 1);

    // Exclude the current character from the output subsequence
    generateSubsequences(input, output, index + 1);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string output = ""; // Initialize the output subsequence as an empty string
    int index = 0;      // Start processing from the first character of the input

    cout << "All subsequences of the string are:" << endl;
    generateSubsequences(input, output, index);

    return 0;
}
```
