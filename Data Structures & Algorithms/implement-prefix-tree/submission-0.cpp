struct node {
    node* link[26];
    bool flag = false;

    node(){
        for( int i=0 ; i<26 ; i++){
            link[i] = nullptr;
        }
    }

    bool contain(char ch){
        return link[ch - 'a'] != nullptr;
    }

    void put(char ch , node* temp){
        link[ch - 'a'] = temp;
    }

    node* get(char ch){
        return link[ch - 'a'];
    }

    void end(){
        flag = true;
    }
};

class PrefixTree {
private : 
    node* root;
public:
    PrefixTree() {
        root = new node();
    }
    
    void insert(string word) {
        node* temp = root;
        for( int i=0 ; i<word.size() ; i++){
            char ch = word[i];
            if( temp->contain(ch) == false ){
                temp->put(ch , new node());
            }
            temp = temp->get(ch);
        }
        temp->end();
    }
    
    bool search(string word) {
        node* temp = root;
        for( int i=0 ; i<word.size() ; i++){
            char ch = word[i];
            if( temp->contain(ch) == false ){
                return false;
            }
            else temp = temp->get(ch);
        }
        return temp->flag;
        
    }
    
    bool startsWith(string prefix) {
         node* temp = root;
        for( int i=0 ; i<prefix.size() ; i++){
            char ch = prefix[i];
            if( temp->contain(ch) == false ){
                return false;
            }
            else temp = temp->get(ch);
        }
        return true;
        
    }
};
