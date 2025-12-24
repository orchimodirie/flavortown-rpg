
#include <iostream> 
#include "Entity.h"
using namespace std;

int main(){
    cout<<" --- FLAVOORTOWN RPG START ---"<<endl;

    Entity goblin("Spicy goblin", 50, 5);

    cout<<"A Wild "<< goblin.name <<" appears!" <<endl;
    cout<<" It has "<<goblin.health << " HP." <<endl;
}

