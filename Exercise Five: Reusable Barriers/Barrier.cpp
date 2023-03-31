/* Barrier.h --- Barrier.h
 * Filename: Barrier.h
 * Author: Filip Rusiecki
 * Created: Fri Mar 31 2023
 */
// Code:
#include "Barrier.h"
#include <iostream>

Barrier::Barrier(int numThreads)
{
    this->numThreads = numThreads;
    count = 0;
}



void Barrier::wait()
{
    mutex->Wait();
    count += 1;
    
    if(count == numThreads)
    {
        secondBarrier->Wait();
        firstBarrier->Signal();
    }
    
    mutex->Signal();
    firstBarrier->Wait();
    firstBarrier->Signal();
    mutex->Wait();
    count -= 1;
    
    if(count == 0)
    {
        firstBarrier->Wait();
        secondBarrier->Signal();
    }
    
    mutex->Signal();
    secondBarrier->Wait();
    secondBarrier->Signal();

}

Barrier::~Barrier()
{
    delete mutex;
    delete firstBarrier;
    delete secondBarrier;
}
//
// Barrier.cpp ends here

