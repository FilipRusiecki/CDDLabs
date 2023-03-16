#include "Semaphore.h"
#include <iostream>
#include <thread>
#include <unistd.h>
/*! \class Signal
    \brief An Implementation of Threads Using Semaphores

   Uses C++11 features such as mutex and condition variables to implement Semaphores in thread functions

*/
/*! displays a message first*/
void taskOne(std::shared_ptr<Semaphore> theSemaphore){
  std::cout <<"I ";
  std::cout << "must ";
  std::cout << "print ";
  std::cout << "first"<<std::endl;
}
/*! displays a message second*/
void taskTwo(std::shared_ptr<Semaphore> theSemaphore, int dely){
  sleep(dely);
  std::cout <<"This ";
  std::cout << "will ";
  std::cout << "appear ";
  std::cout << "second"<<std::endl;
}
int main(void){
  std::thread threadOne, threadTwo;
  std::shared_ptr<Semaphore> sem( new Semaphore);
  /**< Launch the threads  */
  int taskTwoDelay=3;
  threadOne=std::thread(taskOne,sem);
  threadTwo=std::thread(taskTwo,sem,taskTwoDelay);
  std::cout << "Launched from the main\n";
   /**< Wait for the threads to finish */
  threadOne.join();
  threadTwo.join();
  return 0;
}
