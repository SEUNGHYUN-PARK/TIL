#include <stdio.h>	
#include <stdlib.h>
typedef struct LINKNODE
{
	int data;
	struct LINKNODE *next;
}linknode;

void insert_node(linknode *head, int data, int loc_data) // 특정위치에 삽입
{
	linknode *newnode = (linknode*)malloc(sizeof(linknode));
	newnode->data = data;
	newnode->next = NULL;
	linknode *tmp = head;
	while (tmp->next != NULL)
	{
		if (tmp->data == loc_data)
			break;
		tmp = tmp->next;
	}
	if (tmp->next == NULL) // 해당 데이터를 찾지못할경우
	{
		tmp->next = newnode;
	}
	else // 해당 데이터를 찾았을경우
	{
		newnode->next = tmp->next;
		tmp->next = newnode;
	}
}
void add_node(linknode * head, int data) // 노드 추가
{
	linknode *newnode = (linknode*)malloc(sizeof(linknode));
	linknode *tmp = head;
	newnode->data = data;
	newnode->next = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newnode;
}
void delete_last_node(linknode *head)
{
	linknode *tmp = head;
	linknode *tmp2;
	while (tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp2 = tmp->next;
	tmp->next = NULL;
	free(tmp2);
}
void delete_all_node(linknode *head)
{
	linknode *tmp = head;
	linknode *temp2;
	while (tmp->next != NULL)
	{
		if (tmp->next != NULL)
		{
			while (tmp->next->next != NULL)
			{
				tmp = tmp->next;
			}
		}
		temp2 = tmp->next;
		tmp->next = NULL;
		free(temp2);
		tmp = head;
	}
}
void delete_target_node(linknode *head, int target)
{
	linknode *tmp = head;
	while (tmp != NULL)
	{
		if (tmp->next != NULL)
		{
			if (tmp->next->data == target)
				break;
		}

		tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		printf("There are no element what you want to delete\n");
	}
	else
	{
		linknode *tmp2 = tmp->next;
		tmp->next = tmp->next->next;
		free(tmp2);
	}

}
void print_node(linknode *head)
{
	linknode *tmp = head;
	if (tmp->next == NULL)
		printf("There are no elements in LinkedList\n");
	else
	{
		while (tmp != NULL) // 
		{
			printf("%d ", tmp->data);
			tmp = tmp->next;
		}
		printf("\n");
	}
}
//Reverse,Sorting은 데이터배열만들어주고 링크드리스트 탐색통해서 데이터 받아주고
//소팅을하든, stack을 이용해서 리버스를 해준뒤 데이터배열에 있는 수를 하나씩 넣어주면됨



int main(void)
{
	linknode *head;
	head = (linknode*)malloc(sizeof(linknode));
	head->data = -1;
	head->next = NULL;

	for (int i = 0; i < 3; i++)
	{
		add_node(head, i);
	}
	insert_node(head, 6, 9);
	insert_node(head, 9, 3);
	insert_node(head, 7, 2);
	print_node(head);

	delete_last_node(head);
	print_node(head);
	delete_target_node(head, 2);
	print_node(head);
	delete_target_node(head, 10);
	print_node(head);
	delete_target_node(head, 6);
	print_node(head);
	delete_all_node(head);
	print_node(head);


}