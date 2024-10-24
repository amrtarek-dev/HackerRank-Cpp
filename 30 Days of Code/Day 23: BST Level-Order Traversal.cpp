#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

	void levelOrder(Node * root){
      //Write your code here
        if (root != NULL) {
            Node * cur = root;
            vector<Node *> currLevel;
            vector<Node *> nextLevel{cur};
            bool newLevel = false;
            do{
                newLevel = false;
                currLevel = nextLevel;
                nextLevel.clear();
                for(size_t i = 0; i < currLevel.size(); i++){
                    auto node = currLevel[i];
                    if (node->left != NULL){
                        nextLevel.push_back(node->left);
                        newLevel = true;
                    }
                    if (node->right != NULL){
                        nextLevel.push_back(node->right);
                        newLevel = true;
                    }
                    if ((i == (currLevel.size()-1)) && (newLevel != true)){
                        cout << node->data;
                    }else{
                        cout << node->data << " ";
                    }
                }
            }while(newLevel);
        }
	}

};//End of Solution
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}