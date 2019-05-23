#ifndef __STRING__
#define __STRING__

class String{
    private:
    //declare data members here
    char * array;
    public;
        //constructors and destructor
    String();
    String(const char*);
    ~String();

    //other functions 
    unsigned int length();
    void reverse();
    void append(const char);
};

#endif