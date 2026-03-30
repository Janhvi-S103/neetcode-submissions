struct Node
{
    Node* a[26];
    bool flag=false;
    bool containkey(char ch)
    {
        return (a[ch-'a'] != NULL);
    }
    void put(char ch, Node* root)
    {
        a[ch-'a'] = root;
    }
    Node* get(char ch)
    {
        return a[ch-'a'];
    }

};
class PrefixTree {
    private:
        Node* root;
public:
    PrefixTree() {
        root= new Node();
    }
    
    void insert(string word) {
        Node* node = root;
        for(int i=0; i < word.length(); i++)
        {
            if(!node->containkey(word[i]))
                node->put(word[i], new Node());
            
            node = node->get(word[i]);
        }
        node->flag = true;
    }
    
    bool search(string word) {
        Node* node= root;
        for(int i=0; i < word.length(); i++)
        {
            if(!node->containkey(word[i]))
                return false;
            node = node->get(word[i]);
        }
        return node->flag == true;
    }
    
    bool startsWith(string prefix) {
        Node* node= root;
        for(int i=0; i < prefix.length(); i++)
        {
            if(!node->containkey(prefix[i]))
                return false;
            node = node->get(prefix[i]);
        }
        return true;
    }
};
