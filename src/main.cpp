
#include <iostream> 
#include "Entity.h"
using namespace std;

int main(){
    cout<<" --- FLAVOORTOWN RPG START ---"<<endl;

    Entity goblin("Spicy goblin", 50, 5);

    cout<<"A Wild "<< goblin.name <<" appears!" <<endl;
    cout<<"It has "<<goblin.health << " HP." <<endl;

        cout<<"Is the goblin alive? "<<endl;
    if(goblin.isAlive() == true){
        cout<<"Yes it is alive!"<<endl;
    }
    else
        cout<<"Oh, it's dead!"<<endl;

    goblin.takeDamage(50);

    cout<<"It has "<<goblin.health << " HP." <<endl;

    cout<<"Is the goblin alive? "<<endl;
    if(goblin.isAlive() == true){
        cout<<"Yes it is alive!"<<endl;
    }
    else
        cout<<"Oh, it's dead!"<<endl;
}

