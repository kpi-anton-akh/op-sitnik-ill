#include <iostream>
using namespace std;

class Vehicle{
    string make;
    string model;
public:
    Vehicle() =  default;
    Vehicle(string make, string model){
        this -> make = make;
        this -> model = model;
    }
    void set_Model(string model){
        this -> model = model;
    }

    void set_Make(string make){
        this -> make = make;
    }

    string get_model(){
        return model;
    }
    string get_make(){
        return make;
    }
    void display_info(){
        cout << "Info Vehicle\n";
        cout << "Make :" << make << endl;
        cout << "Model :" << model << endl;
    }
};

class Car : public Vehicle{
    string fuelType;
public:
    Car() = default;
    Car(string make, string model, string fuelType) : Vehicle(make, model), fuelType(fuelType){
   }
    void set_fuel_type(string type){
        fuelType = type;
    }
    string get_fuel_type(){
        return fuelType;
    }
    void fuel_type(){
        cout << "Fuel type: " << fuelType << endl;
    }
};

class Motorcycle : public Vehicle{
    string bikeType;
public:
    Motorcycle() = default;
    Motorcycle(string make, string model, string bikeType) : Vehicle(make, model), bikeType(bikeType) {
    }

    void set_bike_type(string type){
        bikeType = type;
    }
    string get_bike_type(){
        return bikeType;
    }
    void bike_type(){
        cout << "Bike type: " << bikeType << endl;
    }
};

    Vehicle create_vehic(){
        string make, model;
        cout << "Create a Vehicle\n";
        cout << "Input make of a vehicle: ";
        getline(cin, make);
        fflush(stdin);
        cout << "Input model of a vehicle: ";
        getline(cin, model);
        fflush(stdin);
        return Vehicle(make, model);
    }

    Motorcycle create_motor(){
        string make, model, type;
        cout << "Create a Motorcycle\n";
        cout << "Input make of a Motorcycle: ";
        getline(cin, make);
        fflush(stdin);
        cout << "Input model of a Motorcycle: ";
        getline(cin, model);
        fflush(stdin);
        cout << "Input type of a Motorcycle: ";
        getline(cin, type);
        fflush(stdin);
        return Motorcycle(make, model, type);
    }

    Car create_car(){
        string make, model, type;
        cout << "Create a Car\n";
        cout << "Input make of a Car: ";
        getline(cin, make);
        fflush(stdin);
        cout << "Input model of a Car: ";
        getline(cin, model);
        fflush(stdin);
        cout << "Input fuel of a Car: ";
        getline(cin, type);
        fflush(stdin);
        return Car(make, model, type);
    }

int main() {

    Vehicle vehicle_1 = create_vehic();
    Car car_1 = create_car();
    Motorcycle bike_1 = create_motor();

    cout << "----------------" << endl;
    cout << "Vehicle\n";
    vehicle_1.display_info();

    cout << "----------------" << endl;
    cout << "Car\n";
    car_1.display_info();
    car_1.fuel_type();

    cout << "----------------" << endl;
    cout << "Motorbike\n";
    bike_1.display_info();
    bike_1.bike_type();
}
