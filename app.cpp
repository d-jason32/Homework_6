#include <iostream>
#include <thread>
#include <mutex>
#include <pthread.h>

// Initialize mutex
std::mutex lock;
// Initialize shared variable that is to be written and read
int shared_variable;

// Function to write the shared variable
void *write(void *arg){
    // Lock the thread
    lock.lock();
    // Write the variable
    shared_variable = 5;
    // Unlock the thread
    lock.unlock();
    return NULL;
}

// Function to print the shared variable
void *read(void *arg){
    // Lock the thread
    lock.lock();
    // Read and print the data.
    printf("The data: %d\n", shared_variable);
    // Unlock the thread
    lock.unlock();
    return NULL;
}

int main() {
    // Create thread 1 and 2 
    pthread_t thread_1;
    pthread_t thread_2;

    // Add a new thread of controll to the current process
    pthread_create(&thread_1, NULL, write, NULL);
    // Wait for thread to terminate
    pthread_join(thread_1, NULL); 

    // Add a new thread of control to the current process
    pthread_create(&thread_2, NULL, read, NULL);
    // Wait for thread to terminate
    pthread_join(thread_2, NULL); 

    // Process completed successfully. 
    return 0;
}
