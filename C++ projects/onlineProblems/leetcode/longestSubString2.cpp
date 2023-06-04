#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int max_length = 0;
        vector<int> chars(128, -1);
        int i = 0;
        for (int j = 0; j < n; j++) {
            i = max(i, chars[s[j]] + 1);
            max_length = max(max_length, j - i + 1);
            chars[s[j]] = j;
        }
        return max_length;
    }
};

int main()
{
    Solution sol;
    sol.lengthOfLongestSubstring("abcdefaaaaaa");
}


/*

bing explaining the code with examples and stuff


This code appears to be an attempt to solve the problem of finding the length of the longest substring without repeating characters in a given string `s`. However, the current implementation is incorrect and will not produce the correct result.

Here is a correct implementation of the `lengthOfLongestSubstring` function using a sliding window approach:

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int max_length = 0;
        unordered_set<char> chars;
        int i = 0;
        int j = 0;
        while (j < n) {
            if (chars.find(s[j]) == chars.end()) {
                chars.insert(s[j]);
                j++;
                max_length = max(max_length, j - i);
            } else {
                chars.erase(s[i]);
                i++;
            }
        }
        return max_length;
    }
};
```

This implementation uses two pointers `i` and `j` to define a sliding window that represents the current substring without repeating characters. It also uses an `unordered_set` to keep track of the characters in the current substring.

The algorithm starts with both pointers at the beginning of the string. It moves the `j` pointer forward until it finds a repeating character. When this happens, it removes the character at the `i` pointer from the set and moves `i` forward until there are no more repeating characters. It keeps track of the maximum length of the substring seen so far and returns it at the end.

This implementation has a time complexity of O(n) and a space complexity of O(min(n, m)), where `n` is the length of the string and `m` is the size of the character set.

Is there anything else you would like to know about this problem or its solution?

`unordered_set<char> chars;` declares a variable `chars` of type `unordered_set<char>`. An `unordered_set` is a container class from the C++ Standard Library that stores unique elements in no particular order. It provides constant-time average complexity for search, insert, and remove operations.

In the context of the `lengthOfLongestSubstring` function, the `chars` set is used to keep track of the characters in the current substring without repeating characters. The algorithm inserts characters into the set as it moves the `j` pointer forward. When it finds a repeating character, it removes characters from the set by moving the `i` pointer forward until there are no more repeating characters.

Here is an implementation of the `lengthOfLongestSubstring` function that doesn't use an `unordered_set`. Instead, it uses an array of integers to keep track of the last index at which each character appeared in the string:

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int max_length = 0;
        vector<int> chars(128, -1);
        int i = 0;
        for (int j = 0; j < n; j++) {
            i = max(i, chars[s[j]] + 1);
            max_length = max(max_length, j - i + 1);
            chars[s[j]] = j;
        }
        return max_length;
    }
};
```

This implementation uses a similar sliding window approach as the previous one. It uses two pointers `i` and `j` to define the current substring without repeating characters. The `chars` array stores the last index at which each character appeared in the string. When a repeating character is found, the algorithm moves the `i` pointer forward to the next index after the last occurrence of that character. It keeps track of the maximum length of the substring seen so far and returns it at the end.

This implementation has a time complexity of O(n) and a space complexity of O(m), where `n` is the length of the string and `m` is the size of the character set.

Is there anything else you would like to know about this problem or its solution?


In the implementation of the `lengthOfLongestSubstring` function that doesn't use an `unordered_set`, the `for` loop iterates through each character in the input string `s` using the `j` variable as the loop counter. For each character, it performs the following steps:

1. `i = max(i, chars[s[j]] + 1);` This line moves the `i` pointer forward to the next index after the last occurrence of the current character (`s[j]`) if it has already appeared in the current substring. This is done by looking up the last index of the current character in the `chars` array and adding `1`. The `max` function ensures that `i` is never moved backward.

2. `max_length = max(max_length, j - i + 1);` This line updates the maximum length of a substring seen so far. It computes the length of the current substring by subtracting `i` from `j` and adding `1`, then compares it to the current maximum length and updates it if necessary.

3. `chars[s[j]] = j;` This line updates the last index of the current character in the `chars` array. It sets the value of the array element corresponding to the current character to the current value of `j`.

After the loop finishes, the `max_length` variable contains the length of the longest substring without repeating characters in the input string.

Is there anything else you would like to know about this code?



In the implementation of the `lengthOfLongestSubstring` function that doesn't use an `unordered_set`, the `vector<int> chars(128, -1);` line declares a variable `chars` of type `vector<int>` and initializes it with 128 elements, all set to `-1`. A `vector` is a container class from the C++ Standard Library that represents a dynamic array. It can grow and shrink at runtime and provides constant-time access to its elements.

In this case, the `chars` vector is used as an array to keep track of the last index at which each character appeared in the input string. The size of the vector is set to 128 to accommodate all possible ASCII characters. Each element of the vector corresponds to a character and stores the last index at which that character appeared in the string. The initial value of all elements is set to `-1` to indicate that no characters have been seen yet.

The `max_length = max(max_length, j - i + 1);` line updates the maximum length of a substring seen so far. The expression `j - i + 1` computes the length of the current substring without repeating characters. The `i` and `j` variables define a sliding window that represents the current substring. The `i` variable points to the first character of the substring, while the `j` variable points to one past the last character of the substring. Therefore, the length of the substring is `j - i`. The `+ 1` is added because both `i` and `j` are zero-based indices.

The `max` function compares the length of the current substring to the current maximum length and updates it if necessary. This ensures that after the loop finishes, the `max_length` variable contains the length of the longest substring without repeating characters in the input string.

Is there anything else you would like to know about this code?




Keeping track of the last index at which each character appeared in the input string is useful for solving the problem of finding the length of the longest substring without repeating characters. The algorithm uses this information to move the `i` pointer forward when it finds a repeating character.

When a repeating character is found, the algorithm needs to move the `i` pointer forward to the next index after the last occurrence of that character. This ensures that the current substring doesn't contain any repeating characters. The `chars` vector provides an efficient way to find the last index of a character in constant time.

For example, let's say the input string is `"abcabcbb"` and the algorithm is currently processing the second `'a'` character. At this point, the `i` pointer points to the first `'a'` character and the `j` pointer points to the second `'a'` character. Since this is a repeating character, the algorithm needs to move the `i` pointer forward to exclude the first `'a'` from the current substring.

To do this, it looks up the last index of `'a'` in the `chars` vector and adds `1`. In this case, the last index of `'a'` is `0`, so it moves `i` to `0 + 1 = 1`. Now `i` points to `'b'`, which is the next index after the last occurrence of `'a'`. The current substring is now `"bca"`, which doesn't contain any repeating characters.

Is there anything else you would like to know about this code or how it works?




Sure! Here's an example that might help you visualize how the `lengthOfLongestSubstring` function works. Let's say the input string is `"abcabcbb"`. The algorithm processes each character in the string from left to right using a sliding window approach. The `i` and `j` variables define the current substring without repeating characters. The `chars` vector keeps track of the last index at which each character appeared in the string.

Initially, both `i` and `j` are set to `0`, and the `chars` vector is initialized with all elements set to `-1`. Here's what the state of the algorithm looks like at the beginning:

```
i
|
v
abcabcbb
^
|
j

chars = [-1, -1, -1, ..., -1]
```

The algorithm enters the `for` loop and starts processing the first character `'a'`. Since `'a'` hasn't been seen yet (`chars['a'] == -1`), it doesn't move the `i` pointer. It updates the last index of `'a'` in the `chars` vector to `0`, increments `j`, and updates the maximum length to `1`.

```
i
|
v
abcabcbb
 ^
 |
 j

chars = [-1, -1, -1, ..., 0, ..., -1]
```

Next, it processes the second character `'b'`. Since `'b'` also hasn't been seen yet (`chars['b'] == -1`), it doesn't move the `i` pointer. It updates the last index of `'b'` in the `chars` vector to `1`, increments `j`, and updates the maximum length to `2`.

```
i
|
v
abcabcbb
  ^
  |
  j

chars = [-1, -1, -1, ..., 0, 1, ..., -1]
```

The same thing happens for the third character `'c'`. The algorithm doesn't move the `i` pointer, updates the last index of `'c'` in the `chars` vector to `2`, increments `j`, and updates the maximum length to `3`.

```
i
|
v
abcabcbb
   ^
   |
   j

chars = [-1, -1, -1, ..., 0, 1, 2, ..., -1]
```

Now it processes the fourth character `'a'`. Since `'a'` has already been seen (`chars['a'] == 0`), it moves the `i` pointer forward to exclude the first occurrence of `'a'` from the current substring. It sets `i = max(i, chars['a'] + 1) = max(0, 0 + 1) = 1`. Then it updates the last index of `'a'` in the `chars` vector to `3`, increments `j`, and keeps the maximum length at `3`.

```
 i
 |
 v
abcabcbb
    ^
    |
    j

chars = [-1, -1, -1, ..., 3, 1, 2, ..., -1]
```

The algorithm continues processing characters in this way until it reaches the end of the string. When it finishes, it returns the maximum length of a substring without repeating characters seen so far.

I hope this example helps you understand how this solution works. Is there anything else you would like to know?




Sure! Let's see how the `lengthOfLongestSubstring` function works with the input string `"abcdeachehe"`. The algorithm processes each character in the string from left to right using a sliding window approach. The `i` and `j` variables define the current substring without repeating characters. The `chars` vector keeps track of the last index at which each character appeared in the string.

Initially, both `i` and `j` are set to `0`, and the `chars` vector is initialized with all elements set to `-1`. Here's what the state of the algorithm looks like at the beginning:

```
i
|
v
abcdeachehe
^
|
j

chars = [-1, -1, -1, ..., -1]
```

The algorithm enters the `for` loop and starts processing characters one by one. For each character, it moves the `i` pointer forward if necessary to exclude any repeating characters from the current substring. Then it updates the last index of the current character in the `chars` vector and increments `j`. It also updates the maximum length of a substring seen so far by comparing it to the length of the current substring (`j - i`) and updating it if necessary.

After processing all characters in the string, here's what the state of the algorithm looks like:

```
         i
         |
         v
abcdeachehe
           ^
           |
           j

chars = [5, 6, 7, ..., 9, 8, ..., -1]
```

The maximum length of a substring without repeating characters seen so far is `5`, which corresponds to the substring `"abcde"`. Therefore, the function returns `5`.

I hope this example helps you understand how this solution works. Is there anything else you would like to know?






In the example where the input string is `"abcdeachehe"`, after the `lengthOfLongestSubstring` function finishes processing all characters in the string, the final state of the `chars` vector is as follows:

```
chars = [-1, -1, -1, ..., 5, 6, 7, ..., 9, 8, ..., -1]
```

This means that the last index of `'a'` in the string is `5`, the last index of `'b'` is `6`, the last index of `'c'` is `7`, and so on. All other characters that don't appear in the string have a last index of `-1`.

The `chars` vector is used by the algorithm to keep track of the last index at which each character appeared in the string. It is updated as the algorithm processes each character and is used to move the `i` pointer forward when a repeating character is found.

Is there anything else you would like to know about this code or how it works?




In the `lengthOfLongestSubstring` function, the `chars` vector is used to keep track of the last index at which each character appeared in the input string. Each element of the vector corresponds to a character and stores the last index at which that character appeared in the string.

The index of each element in the `chars` vector represents the ASCII value of the corresponding character. For example, `chars[0]` corresponds to the `NUL` character (ASCII value `0`), `chars[65]` corresponds to the `'A'` character (ASCII value `65`), and so on.

When the algorithm processes a character in the input string, it uses its ASCII value as an index into the `chars` vector to look up or update its last index. For example, when processing the character `'a'`, it uses `chars['a']` or `chars[97]` to look up or update the last index of `'a'` in the string.

Is there anything else you would like to know about this code or how it works?



In the `lengthOfLongestSubstring` function, the `i` variable is used together with the `j` variable to define a sliding window that represents the current substring without repeating characters. The `i` variable points to the first character of the current substring, while the `j` variable points to one past the last character of the current substring.

The algorithm starts with both `i` and `j` set to `0`. As it processes each character in the input string, it moves the `j` pointer forward. If it finds a repeating character, it moves the `i` pointer forward to exclude any repeating characters from the current substring. This is done by looking up the last index of the current character in the `chars` vector and setting `i` to one past that index.

The algorithm keeps track of the maximum length of a substring seen so far by comparing it to the length of the current substring (`j - i`) and updating it if necessary. When it finishes processing all characters in the string, it returns the maximum length seen so far.

In summary, the `i` variable is used to define the beginning of the current substring without repeating characters. It is moved forward when a repeating character is found to exclude any repeating characters from the current substring.

Is there anything else you would like to know about this code or how it works?



*/