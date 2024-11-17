#include <iostream>
using namespace std;

int patternMatching(string str, int str_len, string pattern, int pattern_len)
{
    if (pattern_len > str_len)
        return -1;

    int k = 0, max = str_len - pattern_len + 1;
    while (k < max)
    {
        for (int l = 0; l < pattern_len; l++)
        {
            if (pattern[l] != str[l + k])
                break;
            if (l + 1 == pattern_len)
                return k;
        }
        k++;
    }
    return -1;
}

int main()
{
    string str,pattern;
     cout<<"Enter the string:";
    getline(cin,str);
    cout<<"Enter the pattern:";
    getline(cin,pattern);
    int index = patternMatching(str, str.length(), pattern, pattern.length());
   if (index != -1) {
        cout << "Pattern found at index: " << index << endl;
    } else {
        cout << "Pattern not found." << endl;
    }
    return 0;
}

