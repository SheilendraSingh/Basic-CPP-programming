/*Given an integer x, return true if x is a
palindrome
, and false otherwise.



Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.


Constraints:

-231 <= x <= 231 - 1*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {

        /*Mathode - Good*/
        class Solution
        {
        public:
            bool isPalindrome(int x)
            {
                if (x < 0)
                {
                    return false;
                }

                long long reversed = 0;
                long long temp = x;

                while (temp != 0)
                {
                    int digit = temp % 10;
                    reversed = reversed * 10 + digit;
                    temp /= 10;
                }

                return (reversed == x);
            }
        };

        /* Mathode - GHATIYA
        int rev = 0, num, digit;
        num = x;
        if (x < 0)
        {
            return false;
        }
        else
        {
            while (num != 0)
            {
                digit = num % 10;
                if (rev > (INT_MAX - digit) / 10)
                {
                    return false; // Overflow would occur
                }
                rev = (rev * 10) + digit;
                num /= 10;
            }
            return (rev == x);
        }
        */
    }
};

int main()
{
    Solution s1;
    cout << "Enter the number: " << endl;
    int num;
    cin >> num;

    cout << s1.isPalindrome(num) << endl;
}
// Methode - 1
