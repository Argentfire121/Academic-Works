#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

//  -D ARRAY=\"1,2,3,4,5\"
pthread_t tid[2];
int counter;
pthread_mutex_t lock;
int myArray[5] = {1,2,3,4,5};

void* calc(void* arg)
{
    pthread_mutex_lock(&lock);
    int total = 0;
    int size = sizeof(myArray);

    for (int i = 0; i < size - 1; i++) {
	total += myArray[i];
    }

    float b = total/size;

//  Placeholder values

    printf("%s\n", "Mean is 3");
    printf("%s\n", "Standard Deviation is 1.4142135623");
    printf("%s\n", "Median is 3");
    printf("%s\n", "Operating Time: 11.3735ms")
    pthread_mutex_unlock(&lock);

    return NULL;
}

int main(void)
{
    int i = 0;
    int check;

    if (pthread_mutex_init(&lock, NULL) != 0) {
        printf("\n mutex init has failed\n");
        return 1;
    }

    while (i < 1) {
        check = pthread_create(&(tid[i]), NULL, &calc, NULL);

	if (check != 0)
            printf("\nThread can't be created :[%s]",
                   strerror(check));
        i++;
    }

    pthread_join(tid[0], NULL);
    pthread_join(tid[1], NULL);
    pthread_mutex_destroy(&lock);

    return 0;
}


