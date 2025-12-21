#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class Taxi {

private:
    string plate;
    string driver;

    double totalDistance;
    double totalEarnings;
    double longestRide;

    bool onRide;
    double currentRideDistance;
    double pricePerKm;

    vector<double> rideHistory;

public:
    Taxi() {
        plate = "";
        driver = "";
        totalDistance = 0;
        totalEarnings = 0;
        longestRide = 0;
        onRide = false;
        currentRideDistance = 0;
        pricePerKm = 0;
    }

    Taxi(string plate, string driver, double pricePerKm) {
        this->plate = plate;
        this->driver = driver;
        this->pricePerKm = pricePerKm;
        totalDistance = 0;
        totalEarnings = 0;
        longestRide = 0;
        onRide = false;
        currentRideDistance = 0;
    }

    void startRide(double km) {
        if (onRide) {
            cout << "Taxi is already on a ride!\n";
            return;
        }

        if (km <= 0) {
            cout << "Invalid distance value!\n";
            return;
        }

        currentRideDistance = km;
        onRide = true;
        cout << "Passenger picked up. Ride started.\n";
    }

    double calculateFare(double km) {
        return km * pricePerKm;
    }

    void endRide() {
        if (!onRide) {
            cout << "No active ride found!\n";
            return;
        }

        double fare = calculateFare(currentRideDistance);

        totalDistance += currentRideDistance;
        totalEarnings += fare;
        rideHistory.push_back(currentRideDistance);

        if (currentRideDistance > longestRide) {
            longestRide = currentRideDistance;
        }

        cout << fixed << setprecision(2);
        cout << "Ride completed.\n";
        cout << "Distance: " << currentRideDistance << " km\n";
        cout << "Fare: " << fare << " TL\n";

        onRide = false;
        currentRideDistance = 0;
    }

    double getAverageEarningPerKm() {
        if (totalDistance == 0) return 0;
        return totalEarnings / totalDistance;
    }

    double getPerformanceScore() {
        return getAverageEarningPerKm();
    }

    void showInfo() {
        cout << fixed << setprecision(2);
        cout << "\n------ TAXI INFO ------\n";
        cout << "Driver Name: " << driver << endl;
        cout << "Plate: " << plate << endl;
        cout << "Total Distance: " << totalDistance << " km\n";
        cout << "Total Earnings: " << totalEarnings << " TL\n";
        cout << "Average Earning per km: " << getAverageEarningPerKm() << " TL/km\n";
        cout << "Longest Ride: " << longestRide << " km\n";
        cout << "-----------------------\n";
    }

    void showRideHistory() {
        if (rideHistory.empty()) {
            cout << "No ride history available.\n";
            return;
        }

        cout << "\n------ RIDE HISTORY ------\n";
        for (int i = 0; i < rideHistory.size(); i++) {
            cout << (i + 1) << ". Distance: " << rideHistory[i] << " km\n";
        }
        cout << "--------------------------\n";
    }

    void showPerformance() {
        if (totalDistance == 0) {
            cout << "No performance data available.\n";
            return;
        }

        cout << fixed << setprecision(2);
        cout << "\n------ DRIVER PERFORMANCE ------\n";
        cout << "Total Rides: " << rideHistory.size() << endl;
        cout << "Total Distance: " << totalDistance << " km\n";
        cout << "Total Earnings: " << totalEarnings << " TL\n";
        cout << "Performance Score: " << getPerformanceScore() << endl;
        cout << "--------------------------------\n";
    }
};

int main() {
    string driver, plate;
    double pricePerKm;
    int choice;

    cout << "Enter Driver Name: ";
    cin >> driver;

    cout << "Enter Taxi Plate: ";
    cin >> plate;

    cout << "Enter Price per KM: ";
    cin >> pricePerKm;

    Taxi taxi(plate, driver, pricePerKm);

    while (true) {
        cout << "\n========== TAXI RIDE SIMULATOR ==========\n";
        cout << "1. Pick Up Passenger\n";
        cout << "2. Drop Off Passenger\n";
        cout << "3. Show Taxi Info\n";
        cout << "4. Show Ride History\n";
        cout << "5. Show Driver Performance\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: 
            double km;
            cout << "Enter ride distance (km): ";
            cin >> km;
            taxi.startRide(km);
            break;
        
        case 2:
            taxi.endRide();
            break;

        case 3:
            taxi.showInfo();
            break;

        case 4:
            taxi.showRideHistory();
            break;

        case 5:
            taxi.showPerformance();
            break;

        case 0:
            cout << "Exiting Taxi Ride Simulator... Goodbye!\n";
            return 0;

        default:
            cout << "Invalid choice!\n";
        }
    }
}
