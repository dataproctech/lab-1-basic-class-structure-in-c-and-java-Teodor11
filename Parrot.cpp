// include the necessary libraries
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

class Parrot
{
    string messages[100];
    int messagesCount = 1;
    int repeatCount;

public:
    Parrot(String message, int repeatCount)
    {
        this.messages[0] = message;
        this.repeatCount = repeatCount;
    }

    void say()
    {
        for (int i = 0; i < this.repeatCount; i++)
        {
            int index = getRandomNumber(0, messagesCount - 1);
            cout << this.messages[index];
        }
    }

    void add(string message)
    {
        messages[messagesCount] = message;
        messagesCount++;
    }

    static int getRandomNumber(int min, int max)
    {
        srand(time(0));
        return min + (rand() % (max - min + 1));
    }
};

int main()
{
    Parrot p = new Parrot("Hello", 2);
    p.add("Hey");
    p.add("Hi");
    p.say();

    return 0;
}