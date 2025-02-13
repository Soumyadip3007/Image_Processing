#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main()
{
    ifstream image;
    ofstream O_image;
    image.open("image.ppm");
    O_image.open("image2.ppm");
    string type="", width="", height="", max="";
    image>> type;
    image>> width;
    image>> height;
    image>> max;
    //cout<< type << " " << width << " " << height << " " << max << endl;

    O_image<< type << endl;
    O_image<< width << " " << height << endl;
    O_image<< max << endl;
    string red="", green="", blue="";
    int r=0, g=0, b=0;
    while(!image.eof())
    {
        image>> red;
        image>> green;
        image>> blue ;
        stringstream red_str(red);
        red_str>> r;
        stringstream green_str(red);
        green_str>> g;
        stringstream blue_str(red);
        blue_str>> b;
        if(g+50>255)  //green filter
        {
            g=255;
        }
        else g+=50;
        O_image<< r << " " << g << " " << b << endl;
    }
    image.close();
    O_image.close();
    return 0;
}