#include <iostream>
#include <unordered_map>

class TrieNode {
public:
    std::unordered_map<char, TrieNode*> children;
    bool is_end_of_word;

    TrieNode() {
        is_end_of_word = false;
    }
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    // Insert function to insert a word into the Trie
    void insert(const std::string& word) {
        TrieNode* current = root;
        for (char ch : word) {
            if (current->children.find(ch) == current->children.end()) {
                current->children[ch] = new TrieNode();
            }
            current = current->children[ch];
        }
        current->is_end_of_word = true;
    }

    // Search function to check if a word exists in the Trie
    bool search(const std::string& word) {
        TrieNode* current = root;
        for (char ch : word) {
            if (current->children.find(ch) == current->children.end()) {
                return false;
            }
            current = current->children[ch];
        }
        return current != nullptr && current->is_end_of_word;
    }
};

int main() {
    Trie trie;

    // Insert some words into the Trie
    trie.insert("apple");
    trie.insert("banana");
    trie.insert("app");
    trie.insert("ban");
    trie.insert("cat");

    // Search for words in the Trie
    std::cout << std::boolalpha;
    std::cout << "Searching for 'apple': " << trie.search("apple") << std::endl;   // Output: true
    std::cout << "Searching for 'app': " << trie.search("app") << std::endl;       // Output: true
    std::cout << "Searching for 'banana': " << trie.search("banana") << std::endl; // Output: true
    std::cout << "Searching for 'grape': " << trie.search("grape") << std::endl;   // Output: false

    return 0;
}


/*
Searching for 'apple': true
Searching for 'app': true
Searching for 'banana': true
Searching for 'grape': false
*/