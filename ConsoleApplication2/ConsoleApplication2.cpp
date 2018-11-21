// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

	struct node

	{
		int data;
		node *left;
		node *right;

	};
	class bstree
	{
	public:
		node *root;
		bstree()
		{
			root = NULL;

		}

		void append(int num)
		{
			node *temp = new node;
			temp->data = num;
			temp->left = NULL;
			temp->right = NULL;
			if (root == NULL)
			{
				cout << root<<endl;
				root = temp;
				cout <<"inserted"<< root << endl;
			}

			else
			{
				node * t = root;
				while (t->left != NULL && t->right != NULL)
				{
					if (num < t->data)
					{
						t = t->left;
					}
					else
					{
						t = t->right;
					}
				}


				if (num < t->data)
				{
					//cout <<"left"<<t-> left << endl;
					t->left = temp;
					cout << "left" <<t-> left << endl;
				}
				else
				{

					cout << "right" << t->right << endl;
					t->right = temp;
					cout << "right" << t->right << endl;
				}	
			}


		}
		void inorder(node * p)
		{
			if (p!= NULL)
			{
				//cout << root;
				//cout << p << endl;
				inorder(p->left);
				cout << p->data;
				inorder(p->right);
			}
		}

	};

int main()
{
	bstree obj;
	int num,j = 0;
	
	while (j != 3)
	{
		cout << "\n1 for input \n2display\n3 exit" << endl;
		cin >> j;
		switch (j)
		{
		case 1:
			cout << "enter the number" << endl;
			cin >> num;
			obj.append(num);
			break;
		case 2:
			node *p = obj.root;
			obj.inorder(p);
			break;
		}
	}
}