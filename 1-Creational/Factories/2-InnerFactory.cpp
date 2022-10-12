
#include<iostream>
#include<math.h>
//! static ro az do ta func e paeen bardashtim --> hala arzesh dare az class instantiate kuni va 
//! obj begiri ---> ke chi? ta kole object factory ro befresti to ye func dg va bahash kar kuni jaye inke mostaghim ba func static Point ro ijad kuni
//! albate in ye badi dare ke class ro expose mikune  --> chun mishe azash instantiate kard! ---> che kunim ke ye trade of dashte bashim ---> move the PointFactory inside the Point in private section
//! friend declaration ro ham pak kun va object ro dar baskhsh public instantiate kun --> static bashe -->vase Point ye Facrory kafie chun kasi ke instantiate nemikune azash
//! static ro ham be do ta func e class PointFactory bezar


class Point{
    private:
        Point(const float x, const float y): x{x} , y{y} {} 
    
        class PointFactory{ 
            public:
                static Point NewCartesian(const float x , const float y) 
                {
                    return {x,y};
                }

                static Point NewPolar(const float r , const float theta) 
                {
                    return {r*cos(theta),r*sin(theta)};
                }
        };


    public:
        float x,y;

        
        friend std::ostream& operator<<(std::ostream& os , const Point& obj)
        {
            return os << "x: "<<obj.x <<" y: "<<obj.y;
        }

        static PointFactory Factory; // instance e az class bala yani PointFactory hast
};


int main()
{
    //Point::PointFactory pf; //in kar nemikune 
    //auto p = Point::PointFactory::NewCartesian(1,2); // in ham kar nemikune mage inke class PointFactory dar public bashe ke ma az ghasd gozashtimesh to private, albate age public bokoni niazi be static PointFactory Factory nist chun mitoni object begiri az class PointFactory ba estefade az Point::PointFactory pf;

    auto p = Point::Factory.NewCartesian(2,3);
    std::cout<<p<<"\n";
}


//! so you can expose your PointFactory with the previous code --> factory method 
//! or you could expose it with the current lesson in the Point class and instantiate it in the Point class. chun class PointFactory bedone class Point mani peyda nemikune vase hamin mizarim to class Point
//! kholse bahs sare flexibility hast 