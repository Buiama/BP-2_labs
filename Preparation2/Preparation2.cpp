#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class TPhone {
    string name;
    int timeCity;
    int timeCountry;
    float costCity;
    float costCountry;
public:
    string getName();
    void setName(string);
    int getTimeCity();
    void setTimeCity(int);
    int getTimeCountry();
    void setTimeCountry(int);
    float getCostCity();
    void setCostCity(float);
    float getCostCountry();
    void setCostCountry(float);
    TPhone(string n, int tci, int tco, float cci, float cco) : name(n), timeCity(tci), timeCountry(tco), costCity(cci), costCountry(cco) {}
    ~TPhone() {}
    void print();
};

inline string TPhone::getName() {
    return name;
}
inline void TPhone::setName(string n) {
    name = n;
}
inline int TPhone::getTimeCity() {
    return timeCity;
}
inline void TPhone::setTimeCity(int tci) {
    timeCity = tci;
}
inline int TPhone::getTimeCountry() {
    return timeCountry;
}
inline void TPhone::setTimeCountry(int tco) {
    timeCountry = tco;
}
inline float TPhone::getCostCity() {
    return costCity;
}
inline void TPhone::setCostCity(float cci) {
    costCity = cci;
}
inline float TPhone::getCostCountry() {
    return costCountry;
}
inline void TPhone::setCostCountry(float cco) {
    costCountry = cco;
}
void TPhone::print() {
    cout << "Name: " << name << endl;
    cout << "TimeCity: " << timeCity << "1 minute costs = " << costCity << endl;
    cout << "TimeCountry: " << timeCountry << "1 minute costs = " << costCountry << endl << endl;
}
vector <TPhone> input(TPhone, TPhone);

int main()
{
    cout << "Hello World!\n";
    TPhone one("Buialo Dmytro", 68, 0.5, 0, 2), two("Mukha Iryna", 14, 0.5, 40, 2);
    one.print();
    two.print();
    vector <TPhone> listOfPhone = input(one, two);
}

vector <TPhone> input(TPhone one, TPhone two) {
    vector <TPhone> listOfPhone;
    listOfPhone.push_back(one);
    listOfPhone.push_back(two);
    for (TPhone good : listOfPhone) {
        cout << good.getName() << good.getTimeCity() << good.getTimeCountry() << endl;
    }
    return listOfPhone;
}