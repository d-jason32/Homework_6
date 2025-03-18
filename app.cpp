// Write a Program using Mutex and Pthread, where Thread_1 writes 
//information into a Shared Variable and Thread_2 reads Information 
//from that Shared Data. Submit your GitHub link for your program.
#include <iostream>
#include <thread>
#include <mutex>

int main() {
    pthread_t thread_1;
    pthread_t thread_2;

    std::mutex lock;

    int shared_variable = 5;

    return 0;
}
