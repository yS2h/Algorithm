#include <stdio.h>
#define MAX 500001

typedef struct {
    int queue[MAX];
    int front, rear;
} QueueType;

void init(QueueType* q);
int empty(QueueType* q);
int full(QueueType* q);
void enqueue(QueueType* q, int item);
int dequeue(QueueType* q);

int main() {
    int N, i, card;
    QueueType q;
    init(&q);

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
        enqueue(&q, i);

    while (1) {
        card = dequeue(&q);
        if (empty(&q)) break;
        card = dequeue(&q);
        enqueue(&q, card);
        if (empty(&q)) break;
    }
    printf("%d", card);

    return 0;
}

void init(QueueType* q) {
    q->front = q->rear = 0;
}

int empty(QueueType* q) {
    return (q->front == q->rear);
}

int full(QueueType* q) {
    return ((q->rear + 1) % MAX == q->front);
}

void enqueue(QueueType* q, int item) {
    if (full(q))
        return;
    q->rear = (q->rear + 1) % MAX;
    q->queue[q->rear] = item;
}

int dequeue(QueueType* q) {
    if (empty(q))
        return 0;
    q->front = (q->front + 1) % MAX;
    return q->queue[q->front];
}
