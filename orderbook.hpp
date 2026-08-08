
/* 

                        FILE FOR CREATING CLASS AND UTILS FOR THE PROJECT

*/

#include <iostream>


/* 

                        Parent class

*/
class orderbook {
    protected :
    // Atrributes
        float* price ;
        float* quant ;
        float* vol ;
        int* state ; // 1 if trade's done 0 else 
    public :
    // Methods  
        orderbook() ; // constructor
        virtual void add_order() ;
        virtual void cancel_order()  ;
        void match_order() ;

};

/*

                        Inherited classes    

*/

class buy_orderbook: public orderbook {
    protected :
    // Atrributes
        float* price ;
        float* quant ;
        float* vol ;
        int* state ; // 1 if trade's done 0 else 

    public :
    // Methods 
        buy_orderbook () ;
        void add_order() ;
        void cancel_order()  ;
};

class sell_orderbook: public orderbook{
    protected :
    // Attributes
        float* price ;
        float* quant ;
        float* vol ;
        int* state ; // 1 if trade's done 0 else 

    public :
    // Methods 
        sell_orderbook () ;
        void add_order() ;
        void cancel_order() ;
};