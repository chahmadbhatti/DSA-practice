//213047
//Assignment 2
#include <iostream>
#include <string>

const int ALPHABET_SIZE = 26;

struct TrieNode 
{
  TrieNode* children[ALPHABET_SIZE];
  bool isEndOfWord;

  TrieNode() : isEndOfWord(false) 
  {
    for (int i = 0; i < ALPHABET_SIZE; i++) 
    {
      children[i] = nullptr;
    }
  }
};

class Trie 
{
 private:
  TrieNode* root;

 public:
  Trie():root(new TrieNode()) {}

  void insert(const std::string& word) 
  {
    TrieNode* curr = root;
    for (char c : word) 
    {
      int index = c - 'a';
      if (curr->children[index] == nullptr) 
      {
        curr->children[index] = new TrieNode();
      }
      curr = curr->children[index];
    }
    curr->isEndOfWord = true;
  }

  bool search(const std::string& word) 
  {
    TrieNode* curr = root;
    for (char c : word) 
    {
      int index = c - 'a';
      if (curr->children[index] == nullptr) 
      {
        return false;
      }
      curr = curr->children[index];
    }
    return curr->isEndOfWord;
  }
  
  bool startsWith(const std::string& prefix) 
  {
    TrieNode* curr = root;
    for (char c : prefix) {
      int index = c - 'a';
      if (curr->children[index] == nullptr) 
      {
        return false;
      }
      curr = curr->children[index];
    }
    return true;
  }
};

int main() 
{
  Trie trie;

  trie.insert("sneaker");
  trie.insert("sneak");
  
  std::cout << trie.search("sneaker") << std::endl; // prints 1
  std::cout << trie.search("sneak") << std::endl; // prints 1
  std::cout << trie.search("sneaky") << std::endl; // prints 1
  std::cout << trie.search("sneakiness") << std::endl; // prints 0

//checking prefix

  std::cout << trie.startsWith("sneak") << std::endl; // prints 1
  std::cout << trie.startsWith("sneaky") << std::endl; // prints 1
  std::cout << trie.startsWith("sneakiness") << std::endl; // prints 0

  return 0;
}
