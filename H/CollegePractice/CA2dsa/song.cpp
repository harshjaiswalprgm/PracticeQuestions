#include <iostream>
#include <string>

using namespace std;

// Node structure for the doubly linked list
struct Song
{ // yhaa pr ham song ka attributes define kr rhee hai
    string title;
    string artist;
    Song *next;
    Song *prev;
};

class MusicPlayer
{
private:
    Song *head; // node banaa rhe hai jo point krega head aur tail in start
    Song *tail;

public:
    MusicPlayer()
    {
        head = nullptr; // aur start me kewal ek node hogi to head and tail dono null ko point krenge.
        tail = nullptr;
    }

    // Function to add a song to the playlist
    void addSong(string title, string artist) // isko ham bana rheee song me jo bhi attributes hai usee linked list me daalne ke liyee
    {
        Song *newSong = new Song; // new node is newSong
        newSong->title = title;   // title hai song ka
        newSong->artist = artist; // title hai artist ka
        newSong->next = nullptr;  // new song ka next null ko point krega..

        if (head == nullptr) // yhaa ham check kr rhe  ki kahi head null to  nahi
        {
            newSong->prev = nullptr; // newSong ka pichalaa wala = null ko point kra dengee
            head = newSong;          // newNode matlab newSong head pe poit krega
            tail = newSong;          // same aise hi
        }
        else
        {
            tail->next = newSong; // agar nulll nahi hai to....
            newSong->prev = tail; // newSong ka previous ko = krdenge tail;
            tail = newSong;       // aur tail ko newSing kr denge
        }
    }

    // Function to display the playlist
    void displayPlaylist() /// ye function banaa rhee ham print krne ke liyeeee
    {
        if (head == nullptr) // check kr rhee head null to nahi hai
        {
            cout << "Playlist is empty" << endl; // hai to empty print kr dooo
            return;
        }

        Song *current = head;      // ek current banaayengee aur head pe point kr dengee
        while (current != nullptr) // for printing
        {
            cout << "Title: " << current->title << " - Artist: " << current->artist << endl;
            current = current->next;
        }
    }
};

int main()
{
    MusicPlayer player;

    // Adding some songs to the playlist
    player.addSong("Shape of You", "Ed Sheeran");
    player.addSong("Closer", "The Chainsmokers");

    // Displaying the playlist
    cout << "Playlist:" << endl;
    player.displayPlaylist();
    cout << endl;

    return 0;
}
