#include <iostream>
#include <list>

using namespace std;

template<typename T, typename S>
class Graph {

  //Vertice
  bool* visited;

   public:
   	list<T> vLists;
	list<S> eLists;
  	Graph(T t, S s);
  	//void addEdge(int src, int dest);
  	void BFS(T startVertex);
  
};



class Vertice{
private:
public:
    std::list<Vertice*> neighbors;
    int nodeID;    
    Vertice(int nodeID):nodeID(nodeID){
      std::cout<< "A p is "<< nodeID << std::endl;
    };
    
    void printList(){
    	std::cout<<"Node "<< nodeID <<" has neighbors ";
    	for(std::list<Vertice*>::iterator 
		    it=neighbors.begin(); it!=neighbors.end(); it++){
		    	/* Using (*p),
				   especially when combining dereferencing 
				   with other operators like . (invoking operator)
				*/   
				std::cout<<(*it)->nodeID<<", ";
			}
		std::cout<<std::endl;	
	}
};

template <typename T, typename S>
class E{
public:
    T p,q;
    
    E(T source_V, T destinate_V):p(source_V), q(destinate_V)
    {
        p->neighbors.push_back(q);
        Graph::eLists
        std::cout<< "E q is "<< q->nodeID << std::endl;        
    };
};



int main() {

    Vertice v0(0), v1(1), v2(2);
    

    E<Vertice*> 
	e1(&v0, &v1),
	e2(&v0, &v2),
	e3(&v1, &v0),
	e4(&v1, &v2),
	e5(&v2, &v1),
	e6(&v2, &v0);
    
    v1.printList();
    v2.printList();
    v0.printList();

    //std::cout<< "3 p is "<< v1.nodeID << std::endl;
    
    //std::cout<< "3 q is "<< v2. << std::endl;


    int i;
    std::cin >> i;
 


  return 0;
}