#include <iostream>
#include <string>
using namespace std;

int countVowels(string str)
{
    int count = 0;

    for (char ch : str)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Number of vowels = " << countVowels(str);

    return 0;
}
