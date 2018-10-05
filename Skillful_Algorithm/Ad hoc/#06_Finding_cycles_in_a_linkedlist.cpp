#include <iostream>
using namespace std;

typedef struct Node
{
	int id;
	struct Node * next;
}Node;

void cycle_check(Node *_node)
{
	Node *onestep;
	Node *twostep;
	onestep = _node;
	twostep = _node;
	while (true)
	{
		if (onestep != _node&& twostep != _node&& onestep == twostep)
		{
			printf("해당 연결리스트엔 사이클이 있습니다\n");
			break;
		}
		if (onestep->next != NULL && twostep->next!=NULL && twostep->next->next!=NULL)
		{
			onestep = onestep->next;
			twostep = twostep->next->next;
		}
		else
		{
			printf("해당 연결리스트엔 사이클이 없습니다\n");
			break;
		}

	}
}

void link_node(Node *_node, int target)
{
	Node * target_node;
	Node * curr= _node;
	while (curr->next != NULL)
	{
		if (curr->id == target)
			target_node = curr;
		curr = curr->next;
	}
	curr->next = target_node;
	printf("%d와 %d노드가 연결되었습니다.\n", curr->id, target_node->id);

}

void insert_node(Node *_node, int data)
{
	Node *curr;

	curr = _node;

	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new Node;
	curr->next->id = data;
	curr->next->next = NULL;
}
int main(void)
{
	Node *node=new Node;
	Node *node2 = new Node;
	node->id = -1;
	node->next = NULL;
	node2->id = -1;
	node2->next = NULL;
	for (int i = 0; i < 10; i++)
	{
		insert_node(node,i);
		insert_node(node2, i);
	}

	link_node(node,5); // node 연결리스트에는 사이클 형성
	cycle_check(node);
	cycle_check(node2);
}
