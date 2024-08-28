#include <iostream>
#include <string>

using namespace std;

struct PlayerNode
{
    string name;
    int age;
    string team;
    PlayerNode *prev;
    PlayerNode *next;

    PlayerNode(string n, int a, string t) : name(n), age(a), team(t), prev(nullptr), next(nullptr) {}
};

class CricketPlayerList
{
private:
    PlayerNode *head;
    PlayerNode *tail;

public:
    CricketPlayerList() : head(nullptr), tail(nullptr) {}

    void addPlayer(string name, int age, string team)
    {
        PlayerNode *newNode = new PlayerNode(name, age, team);
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void displayPlayersForward()  //traversing
    {
        PlayerNode *current = head;
        while (current != nullptr)
        {
            cout << "Name: " << current->name << ", Age: " << current->age << ", Team: " << current->team << endl;
            current = current->next;
        }
    }

    void displayPlayersReverse()
    {
        PlayerNode *current = tail;
        while (current != nullptr)
        {
            cout << "Name: " << current->name << ", Age: " << current->age << ", Team: " << current->team << endl;
            current = current->prev;
        }
    }
};

int main()
{
    CricketPlayerList playerList;
    playerList.addPlayer("Virat Kohli", 33, "India");
    playerList.addPlayer("Joe Root", 31, "England");
    playerList.addPlayer("Kane Williamson", 31, "New Zealand");

    cout << "Displaying players forward:" << endl;
    playerList.displayPlayersForward();

    cout << "\nDisplaying players reverse:" << endl;
    playerList.displayPlayersReverse();

    return 0;
}
