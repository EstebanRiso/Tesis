
#include <fstream>
#include <chrono>
#include "../Headerfiles/k2tree/Knn.hpp"

bool cmp(pair<int, int> & a, pair<int, int> & b){
	if(a.second != b.second){
		return a.second < b.second;
	}
	return  a.first < b.first;
}



int main(int argc, char * argv[]){
	


	MREP * rep = loadRepresentation2(argv[1]);


    K2Tree k2=K2Tree(rep);
    KNN knn=KNN(&k2);

    cout<<"info"<<endl;
    try{
		
		auto start = std::chrono::high_resolution_clock::now();                                      //y x
        priority_queue<KNNElementQueue,vector<KNNElementQueue>,MAXHEAP> resultado=knn.findNNQ(10,Point(rep->numberOfNodes/2,(rep->numberOfNodes-1)/2));
		auto finish = std::chrono::high_resolution_clock::now();
    	cout << std::chrono::duration_cast<std::chrono::nanoseconds>(finish-start).count() << "ns\n";
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
                cout <<"X:"<<a.getCuadrant().getT().getX()<< " ";
                cout <<"Y:"<<a.getCuadrant().getT().getY()<< " "<<endl;
                resultado.pop();
    	}

		cout<<"cantidad nodos"<<k2.getNodes()<<endl;
    }
    catch(error_code e){
        cerr<< e.message() << endl;
    }

	
	cout<<"fin del programa"<<endl;    


 return 0;
}

