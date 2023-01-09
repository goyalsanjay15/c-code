
#include <iostream>
#include <cstring>
using namespace std;
class CWH // ABSTRACT class whose objects cannot be created
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // pure virtual funcion
    
};
class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "Amazing video with title of video is:-"
             << " " << title << endl;
        cout << "Rating given to video  is:-"
             << " " << rating << " *" << endl;
        cout << "videolength of video is:-"
             << " " << videoLength << " minutes" << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "------------------*-------------------" << endl;
        cout << "Amazing text tutorial with title of tutorial is:-"
             << " " << title << endl;
        cout << "Rating given to text tutorial  is:-"
             << " " << rating << " *" << endl;
        cout << "word count of text tutorial  is:-"
             << " " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vl;
    int words;
   // CWH o("Ankita", 3.45); not allowed
    title = "RUN TIME POLYMORPHISM";
    vl = 4.56;
    rating = 4.89;
    CWHVideo video(title, rating, vl);

    title = "RUN TIME POLYMORPHISM";
    words = 399;
    rating = 4.89;
    CWHText text(title, rating, words);

    CWH *ptr[2];
    ptr[0] = &video;
    ptr[1] = &text;
    ptr[0]->display();
    ptr[1]->display();
    return 0;
}
