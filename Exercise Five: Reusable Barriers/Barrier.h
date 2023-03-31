/* Barrier.h --- Barrier.h
 * 
 * Filename: Barrier.h
 * Author: Filip Rusiecki
 * Created: Fri Mar 31 2023
 * 
 */

/* Code: */
#ifndef BARRIER_H
#define BARRIER_H
#include "Semaphore.h"
class Barrier{
    int numThreads;
    int count;
    Semaphore *mutex = new Semaphore(1);
    Semaphore *firstBarrier = new Semaphore(0);
    Semaphore *secondBarrier = new Semaphore(1);
public:
  Barrier(int numThreads);
  virtual ~Barrier();
  void wait();
};
#endif

/* Barrier.h ends here */

