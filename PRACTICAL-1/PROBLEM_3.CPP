#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    string str = "";
    string longest = "";
    int count = 0;
    int ans = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(isalpha(s[i]))
        {
            str += s[i];
            count++;
        }
        else
        {
            if(count > ans)
            {
                ans = count;
                longest = str;
            }

            str = "";
            count = 0;
        }
    }
    if(count > ans)
    {
        longest = str;
    }
    cout << "Longest word: " << longest << endl;
    return 0;
}