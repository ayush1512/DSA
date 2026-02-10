#include <iostream>
using namespace std;
class Shape // Abstract class, it can not be instantiated
{
private:
    float Area;
    float Perimeter;

public:
    float GetArea()
    {
        return this->Area;
    }
    float GetPerimeter()
    {
        return this->Perimeter;
    }
    void SetArea(float Area)
    {
        this->Area = Area;
    }
    void SetPerimeter(float Perimeter)
    {
        this->Perimeter = Perimeter;
    }
    void PrintArea()
    {
        cout << "Area: " << this->Area << endl;
    }
    void PrintPerimeter()
    {
        cout << "Perimeter: " << this->Perimeter;
    }
    // virtual void CalculateArea() = 0; // Pure Virtual Function, Abstract class÷
    // virtual void Method() = 0;
};
// void Shape::Method()
// {
//     cout << "Am Method of Shape" << endl;
// }
class Rectangle : public Shape
{
public:
    float Length;
    float Width;
    void CalculateArea()
    {
        float ar = this->Length * this->Width;
        this->SetArea(ar);
    }
    // method overriding
    void Method()
    {
        cout << "Am Method of Rectangle" << endl;
    }
};
class Circle : public Shape
{
public:
    float Radius;
    void CalculateArea()
    {
        float ar = 3.14 * (this->Radius * this->Radius);
        this->SetArea(ar);
    }
    void Method()
    {
        cout << "Am Method of Circle" << endl;
    }
};
int main()
{
    Shape *ptr; // ptr is pointer of class shape

    ptr = new Rectangle(); // ptr is pointer to object of class rectangle, object upcasting
    ptr->Method();         // Early Binding
}
// int main1()
// {
// 	Rectangle r1;		//r1 is object of class rectangle

// 	Rectangle *ptr=new Rectangle();	//ptr is pointer to object of class rectangle

// 	ptr->Method();		// Early Binding
// }