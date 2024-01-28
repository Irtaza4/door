#include<iostream>

using namespace std;



class Door {

private:

bool isopen;

bool isLocked;

public:

Door(); // Initializes the door as flosed and void openDoor();


void openDoor()
{
if (!isLocked) {
        isopen = true;
        cout << "Door is now open.\n";
    } else {
        cout << "Cannot open the door. It is locked.\n";
    }
}
void closeDoor();

void lockDoor();

void unlock();

bool isDoorOpen() const;
bool isDoorLocked() const;




bool isDoorLocked() const;
};

int main(){ 

return 0;
}


