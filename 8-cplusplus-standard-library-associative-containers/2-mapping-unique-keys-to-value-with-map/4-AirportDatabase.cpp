#include <map>
#include <iostream>
#include <string>

using namespace std;

class Airport{
  public:
    string name{};
    string city{};
    string country{};
    double latitude{};
    double longitude{};
    int altitudeFeet{};

    Airport() =  default;
    Airport(
      string name,
      string city,
      string country,
      double latitude,
      double longitude,
      int altitudeFeet
    ):name(name), city(city), country(country), latitude(latitude),
      longitude(longitude), altitudeFeet(altitudeFeet){}
};
int main(){

  map<string, Airport> airports{
    { "SEA",
      {
        "Seattle Tacoma International Airport", "Seattle", "United State",
        47.449001, -122.3089, 433
      }
    },
    { "LAX",
      {
        "Los Angeles International Airport", "Los Angeles", "United State",
        33.9425, -118.40799, 125
      }
    },
    { "FCO",
      {
        "Leonardo da Vinci - Fiumicino Airport", "Rome", "Italy",
        41.8002778, 12.2388, 13
      }
    },
    { "LHR",
      {
        "London Heathrow Airport", "London", "United Kingdom",
        51.4706, -0.461941, 83
      }
    }
  };

  cout << "Airport Database \n------------------\n";
  cout << "Please enter Airport Unique Code: ";
  string code;
  cin >> code;

  auto it = airports.find(code);
  if(it != end(airports)){
    auto [code, airport] = *it;
    
    cout << "\n";
    cout << "Airport name: " << airport.name << endl;
    cout << "City: " << airport.city << endl;
    cout << "Country: " << airport.country << endl;
    cout << "Latitude: " << airport.latitude << endl;
    cout << "Longitude: " << airport.longitude << endl;
    cout << "Elevation (ft.): " << airport.altitudeFeet << endl; 
  }else{
    cout << "Sorry, Airport code " << code << " not found\n";
  }
  

  return 0;
}