## **[Question Link From Leetcode](https://leetcode.com/problems/reverse-string/)**

## Solution :  

**Approach 1 :** Using static variable or a Global variable.
```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
             static int start = 0;

        if(start>=s.size()-start-1)   // >= this is important
        {
            start = 0;          //importat 
            return;
        }
        
         swap(s[start],s[s.size()-start-1]);
         start++;
         reverseString(s);
    
    }
};
```

**Approach 2 :** Using Helper Function.
```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverseHelper(s, 0, s.size() - 1);
    }

    void reverseHelper(vector<char>& s, int start, int end) {
        if (start >= end) {
            return;
        }
        
        swap(s[start], s[end]);
        reverseHelper(s, start + 1, end - 1);
    }
};
```
