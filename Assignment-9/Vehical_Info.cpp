#include <iostream>
#include <string> 
using namespace std;

class vehicle { 
public:
    string brand;

    void display() {  
        cout << "VEHICLE BRAND : " << brand << endl;
    }
};

class car : public vehicle {
public:
    string c_model;
    string c_colour;
    string c_speed;

    void info_car() {  
        cout << "----- CAR DETAILS -----" << endl;
        display();
        cout << "CAR MODEL : " << c_model << endl;
        cout << "CAR COLOUR : " << c_colour << endl;
        cout << "CAR SPEED : " << c_speed << endl;
        cout << endl;
    }
};

class bike : public vehicle {
public:
    string b_model;
    string b_colour;
    string b_speed;

    void info_bike() { 
        cout << "----- BIKE DETAILS -----" << endl;
        display(); 
        cout << "BIKE MODEL : " << b_model << endl;
        cout << "BIKE COLOUR : " << b_colour << endl;
        cout << "BIKE SPEED : " << b_speed << endl;
        cout << endl;
    }
};

class bus : public vehicle {
public:
    string bus_model;
    string bus_colour;
    string bus_speed;

    void info_bus() { 
        cout << "##### BUS DETAILS #####" << endl;
        display();
        cout << "BUS MODEL : " << bus_model << endl;
        cout << "BUS COLOUR : " << bus_colour << endl;
        cout << "BUS SPEED : " << bus_speed << endl;
        cout << endl;
    }
};

int main() {
    car c1;
    bike b1;
    bus bus1;
    
    c1.brand = "Pagani";
    c1.c_model = "Utopia (2024)";
    c1.c_colour = "SILVER";
    c1.c_speed = "350km/h";
    
    b1.brand = "Husqvarna";
    b1.b_model = "Norden 901";
    b1.b_colour = "WHITE";
    b1.b_speed = "200km/h";
    
    bus1.brand = "Marcopolo";
    bus1.bus_model = "Paradiso G8 1800 DD";
    bus1.bus_colour = "ROYAL BLUE";
    bus1.bus_speed = "100km/h";
    
    c1.info_car();
    b1.info_bike();
    bus1.info_bus();

    return 0;
}
