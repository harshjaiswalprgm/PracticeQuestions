// Q10 Write a code to implement the concept of hashing technique. 

#include <iostream>
#include <vector>
using namespace std;

// HashTable class
class HashTable {
private:
    vector<int> table;
    int capacity;

public:
    HashTable(int size) : capacity(size) {
        table.resize(capacity, -1); // Initialize all slots with -1 indicating empty
    }

    // Hash function
    int hash(int key) {
        return key % capacity;
    }

    // Function to insert a key into the hash table
    void insert(int key) {
        int index = hash(key);
        while (table[index] != -1) {
            index = (index + 1) % capacity; // Linear probing to resolve collisions
        }
        table[index] = key;
        cout << "Inserted " << key << " at index " << index << endl;
    }

    // Function to search for a key in the hash table
    bool search(int key) {
        int index = hash(key);
        int originalIndex = index;
        while (table[index] != key && table[index] != -1) {
            index = (index + 1) % capacity; // Linear probing to search for the key
            if (index == originalIndex) // Reached back to the original index, key not found
                return false;
        }
        return table[index] == key; // Return true if key found at index, false otherwise
    }
};

int main() {
    HashTable hashTable(10); // Create a hash table with capacity 10

    // Insert keys into the hash table
    hashTable.insert(5);
    hashTable.insert(25);
    hashTable.insert(15);
    hashTable.insert(35);

    // Search for keys in the hash table
    cout << "Searching for keys:\n";
    cout << "Key 5 found? " << (hashTable.search(5) ? "Yes" : "No") << endl;
    cout << "Key 15 found? " << (hashTable.search(15) ? "Yes" : "No") << endl;
    cout << "Key 20 found? " << (hashTable.search(20) ? "Yes" : "No") << endl;

    return 0;
}