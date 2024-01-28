#include<iostream>

using namespace std;



class Door {

private:

bool isopen;

bool isLocked;

public:

Door(); // Initializes the door as flosed and void openDoor();


void openDoor();
void closeDoor();

void lockDoor();

void unlock();

bool isDoorOpen() const{

    cout<<"this is door open "<<endl;
}
bool isDoorLocked() const{
    cout<<"THis is isdoorlocked"<<endl;
}


};

int main(){ 

return 0;
}