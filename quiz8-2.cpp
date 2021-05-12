#include <bits/stdc++.h>
using namespace std;
bool isChar(char c)
//trying to figure out how to set up the function right was a bot challenging
{
    return ((c >= 'a' && c <= 'z')
            || (c >= 'A' && c <= 'Z'));
}
bool isDigit(const char c)
{
    return (c >= '0' && c <= '9');
}
bool is_valid(string email)
{
    if (!isChar(email[0])) {
  
        return 0;
    }
    int At = -1, Dot = -1;
  
    for (int i = 0;
         i < email.length(); i++) {
  
        if (email[i] == '@') {
  
            At = i;
        }
  
        else if (email[i] == '.') {
  
            Dot = i;
        }
    }

    if (At == -1 || Dot == -1)
        return 0;
  
    if (At > Dot)
        return 0;
  
    return !(Dot >= (email.length() - 1));
}
  
// Driver Code
//making sure that the Email was type in right
int main()
{
    string email = "emailid@organization.com";
  
    bool ans = is_valid(email);
  
    if (ans) {
        cout << email << " : "
             << "valid" << endl;
    }
    else {
        cout << email << " : "
             << "invalid" << endl;
    }
  
    return 0;
}