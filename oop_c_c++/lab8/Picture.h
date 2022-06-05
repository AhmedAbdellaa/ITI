#ifndef PICTURE_H
#define PICTURE_H
#include <Line.h>
#include <Circle.h>
#include<Rect.h>

class Picture
{
    public:
        Picture();
        Picture(int cn ,int rn , int ln , Line *l , Rect *re ,Circle *c);
        void setCircle(int cn , Circle *c);
        void setLine(int ln , Line *c);
        void setRectangle(int rn , Rect *c);
        void paint();
        ~Picture();

    protected:

    private:
    int cNum ;
    int rNum ;
    int lNum ;

    Rect *rect;
        Line *li;
    Circle *ci ;
};

#endif // PICTURE_H
