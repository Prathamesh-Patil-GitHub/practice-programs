#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *left, *right;
	Node(int data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

class BinarySearchTree{
	private:
		Node *root;
	public:
		BinarySearchTree(){
			root = NULL;
		}
		
		void insertNode(int data){
			Node *newNode = new Node(data);
			if(root == NULL){
				root = 	newNode;
				cout<<"Node inserted successfully !"<<endl;
				return;
			}
			else{
				Node *temp = root;
				while(temp){
					if(data < temp->data){
						if(temp->left == NULL){
							temp ->left = newNode;
							break;	
						}
						else{
							temp = temp->left;						
						}				
					}
					else{
						if(temp->right == NULL){
							temp ->right = newNode;
							break;	
						}
						else{
							temp = temp->right;						
						}
					}				
				}		
			}
			cout<<"Node inserted successfully !"<<endl;
		}
			
		void display(){
			cout<<"BST :"<<endl;
			inorder(root);
			cout<<endl;
		}		

		void inorder(Node *root){
			if(!root){
				return;			
			}
			else{
				inorder(root->left);
				cout<<root->data<<"\t";
				inorder(root->right);	
			}
		}

		bool searchNode(int key){
			if(!root){
				return false;		
			}
			Node *temp = root;
			while(temp){
				if(key < temp->data){
					temp = temp->left;				
				}
				else if(key > temp->data){
					temp = temp->right;
				}
				else{
					return true;
				}
			}
			return false;	
		}

		Node* inorderPredecessor(Node *current){
			current = current -> left;
			while(current -> right){
				current = current -> right;
			}
			return current;
		}

		Node* inorderSuccessor(Node *current){
			current = current -> right;
			while(current -> left){
				current = current -> left;
			}
			return current;
		}

		void deleteNode(int data){
			if(!root){
				cout<<"The tree is empty !!!"<<endl;
				return;		
			}
			if(!searchNode(data)){
				cout<<"The given number is not present in the BST !!!"<<endl;
				return;			
			}
			Node *temp = root;
			while(temp -> data != data){
				if(data < temp -> data){
					temp = temp -> left;
				}
				else{
					temp = temp -> right;
				}
			}
			if(temp->left == NULL && temp->right == NULL){
				cout<<data<<" is deleted !!!"<<endl;
				delete temp;
				root = NULL;
				return;		
			}
			Node *swapNode = NULL;
			if(temp -> left){
				swapNode = inorderPredecessor(temp);
			}
			else{
				swapNode = inorderSuccessor(temp);
			}
			temp -> data = swapNode -> data;
			cout<<data<<" is deleted !!!"<<endl;
			delete swapNode;
			return;
		}

};

int main(){
	BinarySearchTree bst;
	int choice, num;
	do{
 		cout<<"<<<<< MENU >>>>>"<<endl;
 		cout<<"1. Insert"<<endl;
 		cout<<"2. Display (Inorder)"<<endl;
		cout<<"3. Search"<<endl;
		cout<<"4. Delete"<<endl;	
 		cout<<"5. Exit"<<endl;
		cout<<"Enter the choice: ";
		cin>>choice;
		switch(choice){
			case 1: 
				cout<<"Enter the number: ";
				cin>>num;
				bst.insertNode(num);
				break;
			case 2:
				bst.display();
				break;
			case 3:
				cout<<"Enter the key to search"<<endl;
				cin>>num;
				if(bst.searchNode(num)){
					cout<<num<<" is present in the BST"<<endl;
				}
				else{
					cout<<num<<" is not present in the BST"<<endl;
				}
				break;
			case 4:
				cout<<"Enter the number to delete"<<endl;
				cin>>num;
				bst.deleteNode(num);
				break;
			case 5:
				cout<<"Shutting down..."<<endl;
				break;
			default:
				cout<<"Please Enter a Valid Choice !!!"<<endl;
		}
	}while(choice != 5);
	return 0;
}

