#include<iostream>


class Point{
    public:
        
        friend class PointFactory;
    private:
        Point(int a , int b){
            this->a  = a;
            this->b = b;
        }
        int a;
        int b;
};


class PointFactory{
    public:
        static Point* make_cart(int x , int y)
        {
            return new Point(x,y);
        }

        static Point* make_polar(int r , int theta)
        {
            return new Point(r,theta);
        }
};


int main()
{  

   auto cart =  PointFactory::make_cart(1,2);
   auto polar = PointFactory::make_polar(1,3.14/2);

   delete cart;
   delete polar;
}