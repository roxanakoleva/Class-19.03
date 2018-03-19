#include <iostream>

using namespace std;

class Shape
{
    protected:
        double width;
        double height;
    public:
        void setW(double p)
        {
            if(p<0)
            {
                width=0;
            }
            else
            {
                width = p;
            }
        }
        double getW()
        {
            return width;
        }
        void setH (double h)
        {
            if (h<0)
            {
                height = 0;
            }
            else
            {
                height = h;
            }
        }
        double getH ()
        {
            return height;
        }
        void info()
        {
            cout << "w:" << width << endl;
            cout << "h:" << height << endl;
        }
};
class Rectangle : public Shape
{
    public:
        double Area()
        {
            double S = width*height;
            return S;
        }
};
class Triangle : public Shape
{
    public:
        double Aren()
        {
            double S=width*height/2;
            return S;
        };
};

int main()
{
    Shape fig1;
    fig1.setW(-3);
    cout << fig1.getW() << endl;
    Rectangle uktc;
    uktc.setW(5);
    uktc.setH(10);
    cout <<"S="<<uktc.Area()<<endl;
    Triangle tr;
    tr.setW(1.5);
    tr.setH(2.5);
    cout << "S=" << tr.Aren() << endl;
    return 0;
}

