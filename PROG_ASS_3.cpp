/*
*AUTHOR <John Ellyson Santos>
*DATE <August 4 2018>
*NAME <Conversion>
*/
#include <iostream>
using namespace std;



int main()
{
    int m, y, f, i;
    int a, b, c;
    cout << "Enter: ";
    cin >>m>>y>>f>>i;
    cout << "You enter: " << m << "miles " << y << "yards "<< f << "feet " << i    << "inches " << endl;
    cout << "Convert the distance" << endl;
    //mile must be zero or positive
    if(m<0)
    {
        return 0;
    }

 cout << "yard to mile";
    for(a=0; a<100; a++)
    {
        if(y<0)
        {
             return 0;
        }
        if(y>1760)
        {
            m++;
            y -= 1760;
        }
        if(y==1760)
        {
            y = 0;
            m++;
        }
        if(y<1760)
        {
            y = y;
        }
    }

cout << "feet to yard";
    for(b=0; b<100; b++)
    {
        if(f>3)
        {
            y++;
            f -= 3;
        }
        if(f==3)
        {
            y++;
            f= 0;
        }
        if(f<3)
        {
            f = f;
        }
        if(f<0)
        {
            return 0;
        }
    }

   cout<< "inch to feet";
    for(c=0; c<100; c++)
    {
        if(i>12)
        {
            f++;
            i -=  12;
        }
        if(i==12)
        {
            f++;
            i = 0;
        }
        if(i<0)
        {
            return 0;
        }
    }

    cout << "After conversion: " << m << "this is the miles " << y << "this is the yards "<< f << "this is the feet  "   << i << "this is the inches" << endl;
    return 0;
}
