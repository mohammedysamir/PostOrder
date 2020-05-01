//Tree Traversal Problem
#include <iostream>
#include<vector>
#include<string>
using namespace std;
/*
1. Pass 2 string , preorder & inorder
2. substr first index in pre to get the root and push into vector<string>
3. find index of root in inorder and substr from 0 to index & push it in the vector 
4. the rest will be the right subtree push it in the vector 
5. for loop to print Left,Right & root "1,2,0"
*/
//	   RO L				L   RO
//		A BCDEF			BCD A EF		==>BCDEFA
void PostTraversal(string preorder,string inorder) {
	vector<string> Post;//root , left , right
	string temp;
	string root = preorder.substr(0,1);	//store root value
	int indexofroot = inorder.find(root);	//return index of root in inorder
	temp = inorder.substr(0, indexofroot);	//get left subtree
	Post.push_back(temp);
	temp = inorder.substr(indexofroot+1);	//get right subtree
	Post.push_back(temp);
	cout << Post[0] << Post[1] << root<< endl;
}
int main()
{
	string inorder, preorder;
	cin >> preorder >> inorder;
	PostTraversal(preorder, inorder);
}

