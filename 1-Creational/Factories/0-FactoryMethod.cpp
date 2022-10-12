#include<iostream>
#include<math.h>
//Problem
/*
class Point{
    public:
        float x,y;

        Point(const float x , const float y): x{x},y{y}{}

        Point(const float r , const float theta){} //ijad noghte tavasote polar coordinate! ---> ama nemishe do ta constructor yejor dashte bashe! --> rahe hal mishe estefade az enum
};
*/


//1st Solution ---> enum

/*
enum class PointType{
    cartesian,
    polar
};



class Point{
    public:
        float x,y;

        Point(const float a , const float b,PointType type = PointType::cartesian) //momkene yadam bere param sevom ro bezaram --> a,b give me no indication of what their type is ! --> yani hatman bayad param sevom ro bedi ke in disadvantage hast va niaz be ravesh 3 darim
        {
            if (type==PointType::cartesian)
            {
                x=a;
                y=b;
            }
            else{
                x=a*cos(b);
                y=a*sin(b);
            }
        }

};

*/

//2nd Solution ---> get rid of the constructor
//factory method ---> static functions that yields  a point in a properly configured manner. you also can give it a name but you can not give constructor a custom name
//! so your factory method can be descriptive of the exact thing it's gonna do
class Point{
    private:
        Point(const float x, const float y): x{x} , y{y} {} //dg nemitonni mostaghim point besazi chun private hast --> we can not access the private constructor
    
    public:
        float x,y;

        static Point NewCartesian(const float x , const float y) //Factory method 1 --> //! agar in func ha complex bashan behtare ke creation ro externalize kunim!--> boro soraghe Factory.cpp
        {
            return {x,y};
        }

        static Point NewPolar(const float r , const float theta) // Factory method 2
        {
            return {r*cos(theta),r*sin(theta)};
        }
        friend std::ostream& operator<<(std::ostream& os , const Point& obj)
        {
            return os << "x: "<<obj.x <<" y: "<<obj.y;
        }
};



int main()
{
    auto c = Point::NewCartesian(1,2);
    std::cout<<c<<"\n";
    auto p = Point::NewPolar(5,M_PI_4);
    std::cout<<p<<"\n";
}