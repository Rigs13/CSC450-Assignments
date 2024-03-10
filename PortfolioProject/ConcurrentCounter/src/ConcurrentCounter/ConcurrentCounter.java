/**
 * Semisi Rigby
 *
 * Project Name:
 * PortfolioProject - ConcurrentCounter
 *
 * Project Purpose:
 * Exhibit concurrency principles by creating two threads.
 * Thread 1 will count up to 20 using a lock for critical access to counter.
 * Thread 2 will count down from 20 using a lock for critical access to counter.
 *
 * Algorithm used:
 * While loop for counting up/down to/from 20, and lock for thread protection
 *
 * Program Inputs:
 * N/A
 *
 * Program Outputs:
 * Display the counting of both threads
 *
 * Program Limitations:
 * No interaction, so limitations are based on the threads concurrent use.
 * Possible to add better logging for Interrupted Exception; however, this
 * should be N/A in this scenario.
 *
 * Program Errors:
 * N/A
 */

package ConcurrentCounter;

import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;
public class ConcurrentCounter {

    // create an instance of a lock
    private static final Lock lock = new ReentrantLock();
    // create concurrent counter variable
    private static volatile int counter = 0;

    // main method
    public static void main(String[] args) {
        // instantiate first thread with function
        Thread th1 = new Thread(() -> {
            // while loop to count up
            while (counter < 20) {
                lock.lock();
                try {
                    System.out.println("Thread 1 count: " + counter++);
                    Thread.sleep(100);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                } finally {
                    lock.unlock();
                }
            }
            System.out.println("\nFinished counting up to " + counter + ".\n");
        }); // end of thread 1 creation

        Thread th2 = new Thread(() -> {
            // while loop to count down
            while (counter > 0) {
                // lock the critical section of execution
                lock.lock();
                try {
                    // display the count process
                    System.out.println("Thread 2 count: " + counter--);
                    Thread.sleep(100);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                } finally {
                    lock.unlock();
                }
            }
            System.out.println("\nFinished counting down to " + counter+ ".\n" );
        }); // end of thread 2 creation

        // start execution of the threads
        th1.start();
        th2.start();

    } // end of main

} // end of class
