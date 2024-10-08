/*
=======================================
<Tree>

-�������� �ڷḦ ��Ÿ���µ� ���� ����ϴ� �ڷᱸ��
-�θ��尡 ���� �ڽĳ�带 ���� �� �ִ� 1�� �� ����
-�� ��忡�� ����Ͽ� �ٽ� �ڱ� �ڽ��� ���� ���ƿ��� ��ȯ������ ������ �ʴ´�.

<Ʈ�� ����>

-�θ� ��� : ��Ʈ ��� �������� ���� ����� ���
-�ڽ� ��� : ��Ʈ ��� �ݴ� �������� ���� ����� ���
-�Ѹ� ��� : �θ� ��尡 ���� �ֻ��� ���. Tree �� Depth 0�� �Ѱ��� �����Ѵ�.
-���� ��� : �θ� ���� �ڽ� ��尡 ��� �ִ� ���. Ʈ���� �߰��� ��ġ
-�� ��� : �ڽ� ��尡 ���� ��� . Ʈ���� ���� ����

-���� : ��� ��忡�� ���������� ��ġ�� ��
-���� : ��Ʈ �������� ����
-���� : �ڽ� ����� ����

<���ó>

-�ַ� ���������� ���� �� �ִ� �ڷᳪ ȿ������ �˻��� ���� ���
-e.g) �������� ���� ����,������ ���� , DB , �˻������� �������
-���� ��ų�� ����� ������ų�� ��� �� �ִ� ��ųƮ��

<Ʈ���� ����>

-��带 ������� �θ���� �ڽĳ�带 ������ �� �ֵ��� ����

<Binary Tree>
                                                                                                                 
-�θ� ��尡 �ڽ� ��带 �ִ� 2�������� ���� �� �ִ� Ʈ��


[��ȸ ���]

- Ʈ���� �������� �ڷᱸ���̱� ������ ���������� ó���ϱ� ��ȸ�� ���� ��Ģ�� �ִ�.
	
	1.������ȸ(PreOrder) : ��� , ���� , ������ 
	2.������ȸ(InOrder) : ���� , ��� , ������
	3.������ȸ(PostOrder) : ���� , ������ , ���

		  A	
		/   \
	   B     C
      / \   / \
	 D   E F   G

	������ȸ(PreOrder) : A,(B,D,E),(C,F,G) => A-B-D-E-C-F-G
	������ȸ(InOrder) : A,(B,D,E),(C,F,G) => D-B-E-A-F-C-G
	������ȸ(PostOrder) : A,(B,D,E),(C,F,G) => D-E-B-F-G-C-A

=======================================
*/

#include <iostream>

using namespace std;

template <typename T>
class BinaryTree
{
public:
	struct Node
	{
		T data; //����� ������
		Node* parent; //�θ�
		Node* left; //���� �ڽ� ���
		Node* right; //������ �ڽĳ��

		Node(T data) : data(data), parent(nullptr), left(nullptr), right(nullptr) {}
	};
	Node* root; // ��Ʈ ���

public:
	//��Ʈ ��� ��ȯ
	Node* Root()
	{
		return root;
	}
	BinaryTree(T data)
	{
		root = new Node(data);
	}

	~BinaryTree()
	{
	}
	//���� �ڽ� ��� �߰�
	Node* AddLeft(Node* parent,T data)
	{
		//�̹� ���ʿ� �ڽ��� �ִٸ�
		if(parent->left != nullptr)
		{
			cout << "�̹� ���ʿ� �ڽ��� �ִ�" << endl;
			return nullptr;
		}
		//���ο� ��带 ����� �θ��� ���ʿ� ����
		parent->left = new Node(data);
		//�θ� �������ְ� 
		parent->left->parent = parent;
		//��ȯ
		return parent->left;
	}
	Node* AddRight(Node* parent,T data)
	{
		//�̹� �����ʿ� �ڽ��� �ִٸ�
		if (parent->right != nullptr)
		{
			cout << "�̹� �����ʿ� �ڽ��� �ִ�" << endl;
			return nullptr;
		}
		//���ο� ��带 ����� �θ��� ���ʿ� ����
		parent->right = new Node(data);
		//�θ� �������ְ� 
		parent->right->parent = parent;
		//��ȯ
		return parent->right;
	}
	void deleteTree(Node* node)
	{
		if (node == nullptr) 
		{
			return;
		}
		deleteTree(node->left);
		deleteTree(node->right);
		delete node;
	}
	
	//��� (����)
	void PrintInOrder(Node* node) 
	{
		if(node==nullptr)
		{
			return;
		}
		PrintInOrder(node->left);
		cout << node->data << " ";
		PrintInOrder(node->right);
	}

	//��� (����)
	void PrintPreOrder(Node* node)
	{
		if(node==nullptr)
		{
			return;	
		}
		cout << node->data << " ";
		PrintPreOrder(node->left);
		PrintPreOrder(node->right);
	}

	//��� (��ȸ)
	void PrintPostOrder(Node* node)
	{
		if(node==nullptr)
		{
			return;
		}

		PrintPreOrder(node->left);
		PrintPreOrder(node->right);
		cout << node->data << " ";
	}
};

int main()
{
	//��ü����
	BinaryTree<int>* tree = new BinaryTree<int>(20);
	BinaryTree<int>::Node* node = nullptr;

	node = tree->AddLeft(tree->Root(), 30);
	tree->AddLeft(node, 100);
	tree->AddRight(node, 200);

	node = tree->AddLeft(tree->Root(), 40);
	tree->AddLeft(node, 400);
	tree->AddRight(node, 6000);

	tree->PrintInOrder(tree->Root());
}



