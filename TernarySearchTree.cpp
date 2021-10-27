#include<bits/stdc++.h>
using namespace std;

class Node {
private:
	char data;
	bool isEndOfWOrd;
	Node* left, equal, right;

public:
	Node(char val) {
		data = val;
		isEndOfWOrd = false;
		left = equal = right = nullptr;
	}

	bool isEnd() {
		return isEndOfWOrd;
	}
	void setIsEnd() {
		isEndOfWOrd = true;
	}
	Node* getLeft() {
		return left;
	}
	Node* getRight() {
		return right;
	}
	Node* getNext() {
		return equal;
	}
	char getData() {
		return data;
	}
}

class TST {

private:
	Node* root;

public:

	TST() {
		root = nullptr;
	}

	void insert(string word) {

		Node* curr = root;
		int pos = 0;

		while (pos < word.length())
		{
			if (!curr)
			{
				curr = new Node(word[pos]);
			}
			if (curr->getData() == word[pos])
			{
				if (pos == word.length() - 1)
				{
					curr->setIsEnd();
				}
				pos++;
				curr = curr->getNext();
			}
			else if (curr->getData() > word[pos])
			{
				curr = curr->getLeft();
			}
			else
			{
				curr = curr->getRight();
			}
		}
	}

	bool search(string word)
	{

		Node* curr = root;
		int pos = 0;

		while (pos < word.length())
		{
			if (!curr)
			{
				return false;
			}
			if (curr->getData() == word[pos])
			{
				if (pos == word.length() - 1)
				{
					return curr->isEnd();
				}
				pos++;
				curr = curr.getNext();
			} else if (curr->getData() > word[pos])
			{
				curr = curr->getLeft();
			} else
			{
				curr = curr->getRight();
			}
		}
	}


}

int main() {

}