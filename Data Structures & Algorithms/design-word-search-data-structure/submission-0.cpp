struct Word{
    Word* links[26];
    bool flag=false;

    bool containsWord(char ch)
    {
        return links[ch-'a'];
    }
    void putWord(char ch, Word* word)
    {
        links[ch-'a']=word;
    }
    Word* getWord(char ch)
    {
        return links[ch-'a'];
    }
    void setFlag()
    {
        flag=true;
    }
    bool getFlag() {
        return flag;
    }
};
class WordDictionary {
public:
        Word* root;
    WordDictionary() {
        root= new Word();
    }
    
    void addWord(string word) {
        Word* node=root;
        for(int i=0; i < word.size(); i++)
        {
            if(!node->containsWord(word[i]))
            {
                node->putWord(word[i], new Word());
            }
            node=node->getWord(word[i]);
        }
        node->setFlag();
    }

    bool search(string word, int i, Word* node)
    {
        if(!node)
            return false;
        if(i==word.size())
            return node->getFlag();
        char ch= word[i];
        if(ch == '.')
        {
            for(int j=0; j<26;j++)
            {
                if(node->links[j]!=nullptr)
                {
                    if(search(word,i+1,node->links[j]))
                        return true;
                }
            }
            return false;
        }
        else
        {
            if(!node->containsWord(ch))
                return false;
            return search(word,i+1, node->getWord(ch));
        }      
    }
    
    bool search(string word) 
    {
        return search(word,0, root);
    }
    
};
