#include <iostream>
#include <cmath>
using namespace std;

   double calculateDistance() {
        std::cout << "Enter your coordinates (x): ";
        double xplayercoordinate;
        std::cin >> xplayercoordinate;

        std::cout << "Enter your coordinates (y): ";
        double yplayercoordinate;
        std::cin >> yplayercoordinate;

        std::cout << "Enter the coordinates of the target (x): ";
        double xtargetcoordinate;
        std::cin >> xtargetcoordinate;

        std::cout << "Enter the coordinates of the target (y): ";
        double ytargetcoordinate;
        std::cin >> ytargetcoordinate;

        double xcoordinates = xplayercoordinate - xtargetcoordinate;
        double ycoordinates = yplayercoordinate - ytargetcoordinate;

        double xvariable = xcoordinates * xcoordinates;
        double yvariable = ycoordinates * ycoordinates;

        double distance2 = xvariable + yvariable;        
        double distance = sqrt(distance2)*100;        
        std::cout << "The distance to the target is: " << distance << std::endl;
        return distance; 
    }



int main() {
    while(true) {
        double target_distance = calculateDistance();
    }
}