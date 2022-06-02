#ifndef KNNELEMENTQUEUE_HPP
#define KNNELEMENTQUEUE_HPP
#include "../../BitArray/defines.hpp"
#include "../../estructures/Rectangle.hpp"





class KNNElementQueue{

    private:
        uint pos;
        Rectangle cuadrant;
        uint distance;
        int level;
    
    public:

        KNNElementQueue(uint pos, Rectangle cuadrant, uint distance, int level){
            this->pos=pos;
            this->cuadrant=cuadrant;
            this->distance=distance;
            this->level=level;
        }

        ~KNNElementQueue(){}
       
        int getLevel(){
            return level;
        }
        

        uint getPos(){
            return pos;
        }

        int getDistance(){
            return distance;
        }

        Rectangle getCuadrant(){
            return cuadrant;
        }

        void toString(){
            return;
        }

        bool empty(){
            if(this)return true;
            else return false;
        }

};


#endif