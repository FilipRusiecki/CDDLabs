40   Swiper: 
   std::cout << "print ";
   std::cout << "first"<<std::endl;
 }
 /*! displays a message second*/
 void taskTwo(std::shared_ptr<Semaphore> theSemaphore, int dely){
     sleep(dely);
   std::cout <<"This ";
   std::cout << "will ";
   std::cout << "appear ";
