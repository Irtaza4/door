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

void lockDoor()
{
    cout<<"lock door function";
}

void unlock();

bool isDoorOpen() const;
bool isDoorLocked() const;




bool isDoorLocked() const;
};

int main(){ 

return 0;
}