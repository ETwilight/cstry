#include <iostream>
using namespace std;

class Father {
    public:
        Father();
        Father(const Father & rhs);
        virtual ~Father() {};
        virtual void Clone() {
            cout << "suppose to clone bear" << endl;
        }
        virtual void Print() {
            cout << "This is bear" << endl;
        }
    protected:
        int par;
};

class Child : public Father {
    public:
        Child();
        Child(const Child & rhs);
        virtual ~Child() {};
        virtual void Clone() {
            cout << "suppose to clone teddy bear" << endl;
        }
        virtual void Print() {
            cout << "This is teddy bear" << endl;
        }
};

Father::Father() {}
Father::Father(const Father & rhs) {
    par = rhs.par;
    cout << "Bear copy constructor" << endl;
}

Child::Child() {}

Child::Child(const Child & rhs) {
    par = rhs.par;
    cout << "Teddy Bear copy constructor" << endl;
}

int main() {
    return 0;
}