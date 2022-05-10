#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class TGoods {
    string name;
    int count;
    float price;
public:
    string getName();
    void setName(string);
    int getCount();
    void setCount(int);
    float getPrice();
    void setPrice(float);
    TGoods(string n, int c, float p) : name(n), count(c), price(p) {}
    ~TGoods() {}
    void print();
};

inline string TGoods::getName() {
    return name;
}
inline void TGoods::setName(string n) {
    name = n;
}
inline int TGoods::getCount() {
    return count;
}
inline void TGoods::setCount(int c) {
    count = c;
}
inline float TGoods::getPrice() {
    return price;
}
inline void TGoods::setPrice(float p) {
    price = p;
}
void TGoods::print() {
    cout << "Name: " << name << endl;
    cout << "Count: " << count << endl;
    cout << "Price: " << price << endl << endl;
}

vector <TGoods> input(TGoods, TGoods);
double counter(vector<TGoods>&);

int main()
{
    /*string a; cout << "Name: "; cin >> a;
    int b; cout << "count: "; cin >> b;
    float c; cout << "cost"; cin >> c;
    TGoods k(a, b, c);*/
    TGoods one("comb", 30000, 2.49), two("Mukha", 1, 300);
    one.print();
    two.print();
    
    vector <TGoods> listOfGoods = input(one, two);
    
    double totalPrice = counter(listOfGoods);
    cout << "totalPrice = " << totalPrice;
}

vector <TGoods> input(TGoods one, TGoods two) {
    vector <TGoods> listOfGoods;
    listOfGoods.push_back(one);
    listOfGoods.push_back(two);
    for (TGoods good : listOfGoods) {
        cout << good.getName() << endl;
    }
    return listOfGoods;
}

double counter(vector<TGoods>& listOfGoods) {
    double totalPrice = 0;
    for (TGoods good : listOfGoods) {
        totalPrice += good.getCount() * good.getPrice();
    }
    return totalPrice;
}










/*
class TComplex {
    double Re;
    double Im;
public:
    TComplex(double x, double y) : Re(x), Im(y) {}
    TComplex(TComplex& z) { Re = z.Re; Im = z.Im; }
    ~TComplex() {}
    void print();
    TComplex operator-() {
        Re = -Re; Im = -Im;
        return *this;
    }
};

void TComplex::print() {
    cout << setw(10) << fixed << Re << " + i*" << Im << endl;
}

int main()
{
    TComplex z(1, 1), u(0, 0);
    z.print();
    u = -z;
    u.print();
    cin.get();
    cout << "Hello World!\n";
}
*/