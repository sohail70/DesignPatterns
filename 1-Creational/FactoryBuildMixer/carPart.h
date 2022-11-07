#ifndef CAR_PART_H
#define CAR_PART_H

class CarPart{
    public:
        virtual ~CarPart(){};
        virtual void operate() = 0;
    protected:
};


#endif