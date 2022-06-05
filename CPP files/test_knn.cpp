
#include <fstream>
#include <chrono>
#include <time.h>
#include "../Headerfiles/k2tree/Knn.hpp"



int main(int argc, char * argv[]){
    cout<<"iniciando"<<endl;
	MREP * rep = loadRepresentation2(argv[1]);

    K2Tree k2=K2Tree(rep);
    KNN knn=KNN(&k2);

    uint k_vecinos=atoi(argv[2]);
    uint coord_x=atoi(argv[4]);
    uint coord_y=atoi(argv[3]);

    cout<<"aqui estoy"<<endl;

	auto start = std::chrono::high_resolution_clock::now(); 
    priority_queue<KNNElementQueue,vector<KNNElementQueue>,MAXHEAP> resultado=knn.findNNQ(k_vecinos,Point(coord_x,coord_y));
    auto finish = std::chrono::high_resolution_clock::now();
    priority_queue<KNNElementQueue,vector<KNNElementQueue>,MAXHEAP> resultado2=resultado;

    while(!resultado2.empty()){
            KNNElementQueue a =resultado2.top();
            cout<<a.getDistance()<<" ";
            resultado2.pop();
    }
    cout<<endl;
    cout<<endl;

    while(!resultado.empty()){
        KNNElementQueue a =resultado.top();
        cout <<"X:"<<a.getCuadrant().getS().getX()<< " ";
        cout <<"Y:"<<a.getCuadrant().getS().getY()<< " ";
        cout<<endl;
        resultado.pop();
    }

	cout<<"cantidad nodos"<<k2.getNodes()<<endl;
    

    cout << std::chrono::duration_cast<std::chrono::nanoseconds>(finish-start).count() << "ns\n";
	cout<<"fin del programa"<<endl;    


 return 0;
}

