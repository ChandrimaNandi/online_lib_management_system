#define MAX_BOOKS 100
#define BUFFER_SIZE 1000000
#define PORT 3948

typedef struct
{
    int bid;
    char tit[100];
    char auth[100];
    int yr;
    int copies;
} Book;

typedef struct
{
    int uid;
    char name[100];
    char pwd[100];
    int borrowed[MAX_BOOKS];
} User;

void handleReadError(int res)
{
    if (res < 0)
    {
        perror("Read failed");
        exit(EXIT_FAILURE);
    }
}

void handleWriteError(int res)
{
    if (res < 0)
    {
        perror("Write failed");
        exit(EXIT_FAILURE);
    }
}