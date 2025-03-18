// Write a Program using Mutex and Pthread, where Thread_1 writes 
//information into a Shared Variable and Thread_2 reads Information 
//from that Shared Data. Submit your GitHub link for your program.
#include <iostream>
#include <thread>
#include <mutex>

std::mutex lock;
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
    pthread_t thread_1;
    pthread_t thread_2;

    return 0;
}
