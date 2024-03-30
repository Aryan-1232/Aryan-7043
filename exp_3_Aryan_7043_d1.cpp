// // Create a class Room with Data members: length, breadth. Include functions get () and display () to get
// and display the data of room. Include two additional functions: area () and perimeter () to calculate the area
// and perimeter of the room. Implement the class by creating at least 5 objects of the class and display the area
// and perimeter of all 5 rooms.

#include <iostream>
using namespace std;

class Room {
private:
    float length;
    float breadth;

public:
    void get() {
        cout << "Enter length of room: ";
        cin >> length;
        cout << "Enter breadth of room: ";
        cin >> breadth;
    }

    void display() {
        cout << "Length -> " << length << " m\n";
        cout << "Breadth -> " << breadth << " m\n";
    }

    float area() {
        return length * breadth;
    }

    float perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    const int totalRooms = 5;
    Room r[totalRooms];

    cout << "Enter details for " << totalRooms << " rooms:\n";
    for (int i = 0; i < totalRooms; ++i) {
        cout << "Room " << i+1 << ":\n";
        r[i].get();
    }

    cout << "\nDetails of rooms:\n";
    for (int i = 0; i < totalRooms; ++i) {
        cout << "Room " << i+1 << ":\n";
        r[i].display();
        cout << "Area: " << r[i].area() << " square meters\n";
        cout << "Perimeter: " << r[i].perimeter() << " meters\n\n";
    }

    return 0;
}
