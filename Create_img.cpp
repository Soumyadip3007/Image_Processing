#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream image;
    image.open("image.ppm");
    if(image.is_open())
    {
        //place header information in the file
        image<< "P3" << endl;
        image<< "250" << " " << "250" << endl;
        image<< "255" << endl;
        //place pixel information in the file
        for(int y=0;y<250;y++)
        {
            for(int x=0;x<250;x++)
            {
                image<< (x*y)%255 << " " << x << " " << x << endl;
            }
        }
    }
    
    image.close();
    return 0;
}