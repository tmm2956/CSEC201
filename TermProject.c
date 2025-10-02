#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	char input[50];
	char valid[6];
	printf("FML>");
	scanf("%s", input);
	char firstWord = strtok(input, " ");
	//if (strcmp(input, "quit") != 0 | strcmp(input, "validate") != 0 | strcmp(input, "history") != 0 | strcmp(input, "show remote folders") != 0) {
	if (strcmp(firstWord, "show") == 0) {
		char sWord = strtok(input, "show ");


	}


	if (strcmp(valid, "True") == 0) {

		void initialize(struct LinkedList* list) {
			list->size = 0;
			list->head = NULL;
		}
		if (strcmp(input, "history") == 0) {

			void printList(struct LinkedList* list) {
				struct node* temp = list->head;
				if (temp == NULL) {
					printf("No History Available\n");
					return;

				}
				while (temp != NULL) {
					printf("%s\n", temp->command);
					temp = temp->next;
				}
				struct node* newnewNode = (struct node*)malloc(sizeof(struct node));
				strcopy(newNode->command, input);
				newNode->next = list->head;
				list->head = newnewNode;
				list->size++;

			}


		}
		else {
			void addNode(struct LinkedList* list, char* input) {
				struct node* newNode = (struct node*)malloc(sizeof(struct node));
				strcopy(newNode->command, input);
				newNode->next = list->head;
				list->head = newNode;
				list->size++;
				unassigned char hash[40]; 


			}

		}

		hash = unassigned char[40];

	}





}

