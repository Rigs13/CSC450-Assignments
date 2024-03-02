/**
 * Semisi Rigby
 *
 * Project Name:
 * PortfolioProject_Mod7
 *
 * Project Purpose:
 * Exhibit concurrency principles by creating two threads.
 * Thread 1 will count up to 20 using a mutex for locking critical section.
 * Thread 2 will count down from 20 with a mutex for locking critical section.
 *
 * Algorithm used:
 * For loops for counting up/down from 20, mutex for thread protection
 *
 * Program Inputs:
 * No external inputs for this program.
 *
 * Program Outputs:
 * Display the counting of both threads
 *
 * Program Limitations:
 * As there is no interaction with this program, the limitations are limited to
 * the created functions called within each independent thread.
 *
 * Program Errors:
 * N/A
 */

#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

// creation of a mutex for locking
mutex mtx;

// create a void function for counting up to 20
void countUp() {
    // for loop for iterating and displaying count to 20
    for (int i = 0; i <= 20; i++) {
        // establish lock of the critical section
        lock_guard<mutex> lock(mtx);
        cout << "Thread 1: " << i << endl;
    }
} // end of countUp function

// create a void function for counting down from 20
void countDown() {
    // for loop for iterating and displaying count down from 20
    for (int i = 20; i >= 0; i--) {
        // establish lock of the critical section
        lock_guard<mutex> lock(mtx);
        cout << "Thread 2: " << i << endl;
    }
} // end of countDown function

// main
int main() {

    // create individual threads with reference to functions
    thread th1(countUp);
    thread th2(countDown);

    // join threads
    th1.join();
    th2.join();

    // main return statement
    return 0;

} // end of main
