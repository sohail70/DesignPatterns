//joda kardan creation of point az class point ---> ye class joda dorost kun va friend esh kun ba class Point va func ha ro transfer kun ba class jadid

#include<iostream>
#include<math.h>


class Point{
    private:
        Point(const float x, const float y): x{x} , y{y} {} 
    
    public:
        float x,y;

        
        friend std::ostream& operator<<(std::ostream& os , const Point& obj)
        {
            return os << "x: "<<obj.x <<" y: "<<obj.y;
        }

        friend class PointFactory;
};

class PointFactory{ //! in class alan do ta func e static dare pas arzesh instatiate shodan dar main ro nadare
    public:
        static Point NewCartesian(const float x , const float y)  //albate in version sade hast va mishe output ro unique ptr kard jaye inke retrun by value kuni
        {
            return {x,y};
        }

        static Point NewPolar(const float r , const float theta)  //! age static ro dar in 2 ta func nazari chi? boro InnerFactory.cpp ro bebin --->bayad az in class object begiri va bahash kar kuni!
        {
            return {r*cos(theta),r*sin(theta)};
        }
};


int main()
{
    auto c = PointFactory::NewCartesian(1,2);
    std::cout<<c<<"\n";
    auto p = PointFactory::NewPolar(5,M_PI_4);
    std::cout<<p<<"\n";
}