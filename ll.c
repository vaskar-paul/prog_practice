#include <stdio.h>
#include <stdlib.h>

struct llnode {
  unsigned int data;
  struct llnode *next;
};

typedef struct llnode node;

node* getnode()
{
  node *x;
  x = (node *)malloc(sizeof(struct llnode));
  if (x == NULL) {
    printf("Out of memory\n");
    exit(0);
  }
  return x;
  //return first;
}

void freenode(node *x)
{
  free(x);
}

void display(node *first)
{ 
  node *temp;
  if (first == NULL) {
    printf("List is empty\n");
  }
  else {
    temp = first;
    while(temp != NULL) {
      printf("%d->", temp->data);
      temp = temp->next;
    }
    printf("NULL\n");
  }
}

node* delete_front(node *first)
{
  node *temp;
  if(first == NULL) {
    printf("List is empty\n");
    return first;
  }
  
  temp = first;
  first = first->next;
  printf("Deleted item is %d\n", temp->data);
  freenode(temp);
  return first;
}

node* delete_rear(node *first)
{
  node *temp, *cur;
  if(first == NULL) {
    printf("List is empty\n");
    return first;
  }
   
  temp = cur = first;  
  while(temp->next != NULL) {
    cur = temp;
    temp = temp->next;    
  }
  cur->next = NULL;
  printf("Deleted item is %d\n", temp->data);
  freenode(temp);
  return first;
}

node* delete_pos(node *head, int pos)
{
	node *temp, *cur;
	int count = 0;

	if(head == NULL) {
		printf("List is Empty");
		return head;
	}
	
	temp = head;
	while(temp->next != NULL) {
		count++;
		temp = temp->next;
	}
	if(pos > count) {
		printf("Entered position is more than the size of link list\n");
		printf("Please enter position <= %d\n",count);
		return head;
	}

	if((head->next == NULL) && (pos == 0)) {
		printf("Deleted item is %d\n",head->data);
		free(head);
		return NULL;
	}
	
	if (pos == 0) {
		//return delete_front(head);
		temp = head;
  		head = head->next;
		printf("Deleted item is %d\n", temp->data);
  		freenode(temp);
  		return head;

	}

	count = 0;
	temp = cur = head;
	while(temp->next != NULL) {
		count++;
		cur = temp;
		temp = temp->next;
		if(pos == count) {
			cur->next = temp->next;
			printf("Deleted item is %d\n", temp->data);
			free(temp);
		}
	}
	return head;

}

node* insert_front(node *first, int item)
{
  node *temp;
  temp = getnode();
  
  temp->data = item;
  temp->next = first;

  return temp;  
}

node* insert_rear(node *first, int item)
{
  node *temp, *cur;
  temp = getnode();
  
  temp->data = item;
  temp->next = NULL;

  if(first == NULL) return temp;  

  cur = first;
  while(cur->next != NULL) {
    cur = cur->next;
  }
  
  cur->next = temp;
  
  return first;

}

node* insert_pos(node *head, int item, int pos)
{
	int count = 0;
	node *temp, *cur, *prev;
	temp = (node *)malloc(sizeof(struct llnode));	
	if(temp == NULL) {
		printf("Out of memory\n");
		exit(-1);;
	}
	if(pos == 0 && head == NULL) {
		temp->data = item;
		temp->next = NULL;
		return temp;
	}
	else if(pos == 0 && head != NULL) {
		temp->data = item;
		temp->next = head;
		return temp;
	}
	else {
		cur = head;
		while(cur->next != NULL) {
        	        count++;
                	cur = cur->next;
	        }
		if(pos > count+1) {
        	        printf("Entered position is more than the size of link list\n");
                	printf("Please enter position <= %d\n",count);
	                return head;
        	}
		count = 0;
		temp->data = item;
		cur = prev = head;
		while(cur != NULL) {
			if(count == pos) {
				prev->next = temp;
				temp->next = cur;
				return head;
			}
			prev = cur;
			cur = cur->next;
			count++;
		}

		if(cur == NULL && pos == count) {
			prev->next = temp;
			temp->next = NULL;
			return head;
		}
	}
	return head;	
}

//VP TODO Debug
node* insert_sorted(node *first, int item)
{
  node *temp, *cur, *newnode;
  newnode = getnode();
  newnode->data = item;
  newnode->next = NULL;
  
  if(first == NULL) return newnode;

  if(first->data >= newnode->data) {
    newnode->next = first;
    first = newnode;    
  }
  else {
    cur = first;
    while (cur->next != NULL && cur->next->data < newnode->data) {
      cur = cur->next;
    }
    newnode->next = cur->next;
    cur->next = newnode;
  }

  return first;

}

void main()
{
  unsigned int i, n = 0, ch, item, pos;
  node *first = NULL;
  
  while(1)
  {
    printf("1: insert_front\n2: insert_rear\
	    \n3: display\n4: delete_front\
	    \n5: delete_rear\n6: delete_pos\n7: insert_sorted\
	    \n8: insert_pos\
            \n9: Exit\n");
    scanf("%d", &ch);  
  
    switch(ch)
    {
      case 1:
        printf("Enter the data: ");
        scanf("%d", &item);
        first = insert_front(first, item);
        break;

      case 2:
        printf("Enter the data:");
        scanf("%d", &item);
        first = insert_rear(first, item);
        break;

      case 3:
        display(first);
        break;

      case 4:
        first = delete_front(first);
	break;

      case 5:
	first = delete_rear(first);
    	break;

      case 6:
	printf("Enter the position: ");
	scanf("%d", &pos);
	first = delete_pos(first, pos);
	break;

      case 7:
        printf("Enter the data: ");
  	scanf("%d",&item);
        first = insert_sorted(first, item);
  	break;

      case 8:
	printf("Enter the data: ");
	scanf("%d", &item);
	printf("Enter the position: ");
	scanf("%d", &pos);
	first = insert_pos(first, item, pos);
	break;

      default:
        exit(0);
    } 
  }; 

}
