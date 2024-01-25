#include <iostream>
#include <string>

using namespace std;

char generator(char letter)
{
    return letter + 5;
}

void connect(const string &message)
{
    for (char letter : message)
    {
        cout << generator(letter);
    }
}

int main()
{
    string message;

    cout << "Enter your message: ";
    getline(cin, message);
    connect(message);

    return 0;
}
