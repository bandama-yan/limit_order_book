#include <iostream>


/* 

                          File for creating class and utils for the project

*/

class orderbook {
    private :
        enum order ={buy,sell}
        float* price ;
        float* quant ;
        float* vol ;
        int* state ; // 1 if trade's done 0 else 
    public :
        orderbook(); // constructor
        ~orderbook(); // destructor
        void add_order() ;
        void cancel_order() ;
        void match_order() ;
        
};