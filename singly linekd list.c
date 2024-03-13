#include <stdio.h>
#include <stdlib.h>

// 노드 구조체 정의
typedef struct Node {
    int data;
    struct Node* next;  // 다음 노드를 가리키는 포인터
} Node;

// 연결 리스트의 헤드 포인터
Node* head = NULL;

// 연결 리스트에 새로운 노드를 추가하는 함수
void insert(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));

    if (newNode == NULL) {
        return;
    }
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// 연결 리스트의 모든 노드를 출력하는 함수
void print() {
    Node* temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    insert(1);
    insert(2);
    insert(3);
    insert(4);

    printf("Linked list: ");
    print();

    return 0;
}