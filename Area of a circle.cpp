#include <iostream>
using namespace std;

class Circle{
    public:
    Circle(int r)
    :radius(r){
        
    }
    
    void setRadius(int r){
        radius = r;
    }
    
    int getRadius(){
        return radius;
    }
    
    private:
    int radius;
};

class Utility {
    public:
    double area(Circle c){
        const double pi = 3.14;
        int r;
        r = c.getRadius();
        double a;
        a = pi*r*r;
        return a;
    }
};

int main() {
    int r;
    cin>>r;
    
    Circle c(r);
    
    cout<<"Circle radius is: "<<c.getRadius()<<"cm"<<endl;
    
    Utility obj;
    cout<<"\nThe circle, of radius "<<c.getRadius()<<"cm has an area of "<<obj.area(c)<<"cm²";
    
    return 0;
}