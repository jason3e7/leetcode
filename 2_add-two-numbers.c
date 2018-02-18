 /*
  * @file 2_add-two-numbers.c
  * @author Jason3e7
  * @algorithm Linked Lists
  * @date 201802190937
  * @note http://www.learn-c.org/en/Linked_lists
  * When one list is longer than the other.
  * When one list is null, which means an empty list.
  * The sum could have an extra carry of one at the end, which is easy to forget.
  */

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode* next;
};

void push(struct ListNode* head, int val) {
    struct ListNode* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = malloc(sizeof(struct ListNode));
    current->next->val = val;
    current->next->next = NULL;
}

void print_list(struct ListNode* head) {
    struct ListNode* current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	int carry = 0, first = 1;   
	struct ListNode* result = NULL;
	result = malloc(sizeof(struct ListNode));
	result->val = 0;
	result->next = NULL;

	struct ListNode* current = result;
	while(l1 != NULL || l2 != NULL || carry == 1) {
		if(first == 0) {
			current->next = malloc(sizeof(struct ListNode));
			current->next->val = carry;
			current->next->next = NULL;
			current = current->next;	
		}
		if(l1 != NULL) {
			current->val += l1->val;
			l1 = l1->next;	
		}
		if(l2 != NULL) {
			current->val += l2->val;
			l2 = l2->next;	
		} 	
		if(current->val >= 10) {
			current->val -= 10;
			carry = 1;
		} else {
			carry = 0;
		}
		first = 0;
	}
	return result;
}

int main() {
	struct ListNode* l1 = NULL;
	l1 = malloc(sizeof(struct ListNode));

	l1->val = 2;
	l1->next = NULL;
	push(l1, 4);
	push(l1, 3);
	
	struct ListNode* l2 = NULL;
	l2 = malloc(sizeof(struct ListNode));
	
	l2->val = 5;
	l2->next = NULL;
	push(l2, 6);
	push(l2, 4);

	print_list(addTwoNumbers(l1, l2));
	return 0;
}
