struct TrieNode 
{ 
     struct TrieNode *children[26];
     bool final;
};

inline int charToAlfa(char letter){
    return letter-'a';
}

TrieNode* insertInTrie(TrieNode* trie, std::string word){
    if(word.empty()){
        trie->final = true;
        return trie;
    }
    if(trie->children[charToAlfa(word[0])] == NULL){

        TrieNode *child = new TrieNode();
        child->children = [];
        child->final = false;
        child = insertInTrie(child, word.substr(1));
        return child;
    }
    else{
        trie = insertInTrie(trie->children[charToAlfa(word[0])], word.substr(1));
        return trie;
    }
}

int numberKeys(int counter, TrieNode* node, std::string word){
    if()
}

int main(){
    int n;
    std::cin >> n;

    TrieNode *trie = new TrieNode();


    for(int i = 0; i < n; i++){
        std::string word;
        std::cin >> word;
        trie = insertInTrie(trie, word);
    }

    
}

