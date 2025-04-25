//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//class GasPump {
//public:
//    void setCostPerGallon(double cpg) {
//        costPerGallon = cpg;
//    }
//
//    double getCostPerGallon() {
//        return costPerGallon;
//    }
//    void setAmountDispensed(int seconds) {
//        const double dispense = 0.10;
//        sec = seconds;
//        amountDispensed = dispense * sec;
//    }
//
//    int getAmountDispensed() {
//        return amountDispensed;
//    }
//    void setAmountCharged(double costPerGallon, double     amountDispensed) {
//        amountCharged = costPerGallon * amountDispensed;
//    }
//
//    double getAmountCharged() {
//        return amountCharged;
//    }
//
//private:
//    double costPerGallon;
//    int sec;
//    double amountCharged, amountDispensed;
//};
//
//int main() {
//    double cpg = 0.0;
//    int seconds = 0;
//    GasPump pump;
//
//    cout << "Enter the cost per gallon of gas:";
//    cin >> cpg;
//    while (cpg <= 0.0) {
//        cout << "Enter a value greater than 0:";
//        cin >> cpg;
//    }
//    pump.setCostPerGallon(cpg);
//
//    cout << "Enter the amount of seconds you want to pump gas for:";
//    cin >> seconds;
//    while (seconds <= 0.0) {
//        cout << "Enter a value greater than 0:";
//        cin >> seconds;
//    }
//    pump.setAmountDispensed(seconds);
//
//    cout << "The gas pump dispensed " << pump.getAmountDispensed() << " gallons of gas." << endl
//        << "At $" << pump.getCostPerGallon() << " per gallon, your total is $"
//        << fixed << setprecision(2) << pump.getAmountCharged() << "." << endl;
//
//    return 0;
//}
//}