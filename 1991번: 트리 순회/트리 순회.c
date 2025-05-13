/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1991                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: klm4416 <boj.kr/u/klm4416>                  +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1991                           #+#        #+#      #+#    */
/*   Solved: 2025/05/12 16:28:32 by klm4416       ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
    char name;
    struct Node *llink;
    struct Node *rlink;
} Node;

// 함수 프로토타입 선언
Node* find_node(Node *node, char name);
Node* init_node(Node* node);
Node* insert_node(Node* node, char name, char llink, char rlink);

// 노드 초기화 함수
Node* init_node(Node* node)
{
    if (node == NULL) return NULL;
    node->name = '\0';
    node->llink = NULL;
    node->rlink = NULL;
    return node;
}

// 노드 삽입 함수
Node* insert_node(Node* node, char name, char llink, char rlink)
{
    if (node == NULL)
    {
        node = init_node((Node*)malloc(sizeof(Node)));
        if (node == NULL) {
            fprintf(stderr, "메모리 할당 실패\n");
            exit(1);
        }
        node->name = name;

        if (llink != '.')
        {
            node->llink = init_node((Node*)malloc(sizeof(Node)));
            if (node->llink == NULL) {
                fprintf(stderr, "메모리 할당 실패\n");
                exit(1);
            }
            node->llink->name = llink;
        }

        if (rlink != '.')
        {
            node->rlink = init_node((Node*)malloc(sizeof(Node)));
            if (node->rlink == NULL) {
                fprintf(stderr, "메모리 할당 실패\n");
                exit(1);
            }
            node->rlink->name = rlink;
        }
    }
    else
    {
        Node *find = find_node(node, name);
        if (find != NULL)
        {
            if (llink != '.')
            {
                find->llink = init_node((Node*)malloc(sizeof(Node)));
                if (find->llink == NULL) {
                    fprintf(stderr, "메모리 할당 실패\n");
                    exit(1);
                }
                find->llink->name = llink;
            }

            if (rlink != '.')
            {
                find->rlink = init_node((Node*)malloc(sizeof(Node)));
                if (find->rlink == NULL) {
                    fprintf(stderr, "메모리 할당 실패\n");
                    exit(1);
                }
                find->rlink->name = rlink;
            }
        }
    }
    return node;
}

// 노드 찾기 함수
Node* find_node(Node *node, char name)
{
    if (node == NULL) {
        return NULL; // 노드가 없으면 NULL 반환
    }

    if (node->name == name) {
        return node; // 현재 노드가 찾는 노드라면 반환
    }

    // 왼쪽 서브트리에서 찾기
    Node *found = find_node(node->llink, name);
    if (found != NULL) {
        return found;
    }

    // 오른쪽 서브트리에서 찾기
    return find_node(node->rlink, name);
}

// 전위 순회
void preorder(Node *ptr) 
{
    if (ptr != NULL)
    {
        printf("%c", ptr->name);
        preorder(ptr->llink);
        preorder(ptr->rlink);
    }
}

// 중위 순회
void inorder(Node *ptr)
{
    if (ptr != NULL)
    {
        inorder(ptr->llink);
        printf("%c", ptr->name);
        inorder(ptr->rlink);
    }
}

// 후위 순회
void postorder(Node *ptr)
{
    if (ptr != NULL)
    {
        postorder(ptr->llink);
        postorder(ptr->rlink);
        printf("%c", ptr->name);
    }
}

int main() 
{
    int n;
    Node *root = NULL;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char name, llink, rlink;
        scanf(" %c %c %c", &name, &llink, &rlink);

        root = insert_node(root, name, llink, rlink); // 루트 업데이트
    }

    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    printf("\n");

    // 메모리 해제를 위한 후속 작업 필요
}