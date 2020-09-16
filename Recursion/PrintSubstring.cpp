/* Given A String, Print All Substring of it (in any Order) */
/* I/P: str = "ABC" */
/* O/P: " ", "A", "B", "C", "AB", "AC", "BC", "ABC" */

#include <bits/stdc++.h>
using namespace std;

void PrintSub(string str, string curr = " ", int index = 0)
{
    if (index == str.length()) {
        cout << curr << " " << endl;
        return;
    }
    PrintSub(str, curr, index + 1);
    PrintSub(str, curr + str[index], index + 1);
}
int main()
{
    PrintSub("ABC"); // => 7 pattern string and 1 empty string
    PrintSub("AB");  // => 3 Pattern string and 1 empty string
}
