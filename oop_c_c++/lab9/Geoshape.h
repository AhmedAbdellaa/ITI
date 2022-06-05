#ifndef GEOSHAPE_H
#define GEOSHAPE_H

class Geoshape
{
public:
    Geoshape();
   // Geoshape(float x);
    //Geoshape(float x,float y);
    void setDim1(float x);
    void setDim2(float y);
    float getDim1();
    float getDim2();
    virtual float calculateArea(){
    return 0;}
        ~Geoshape();
protected:
    float dim1;
    float dim2;
private:
};

#endif // GEOSHAPE_H
