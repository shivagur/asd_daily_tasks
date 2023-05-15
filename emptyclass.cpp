

// first oops program ////////////////////////////////////////////////////////////////
/*#include <iostream>
using namespace std;

class Mrbean
{
    // properties
};

int main()
{

    // creation of a object
    Mrbean bean;

    cout << "size of the object: " << sizeof(bean) << endl;

    return 0;
}
*/
// #####################################################################################################################
//  second one program

/*#include <iostream>
using namespace std;

class Example
{
private:
    int private_data;

    void private_function()
    {
        cout << "This is a private function." << endl;
    }

public:
    int public_data;

    void public_function()
    {
        cout << "This is a public function." << endl;
        private_function();
        cout << "The value of private_data is: " << private_data << endl;
    }

    int get_private_data()
    {
        return private_data;
    }

    void set_private_data()
    {
        private_data = 100;
    }
};

int main()
{
    Example obj;
    obj.set_private_data();
    cout << "The value of private data is: " << obj.get_private_data() << endl;

    return 0;
}

*/
// ############################################################################################################################
#include <iostream>
using namespace std;

class Example
{
private:
    int private_data;

    void private_function()
    {
        cout << "This is a private function." << endl;
    }

public:
    int public_data;
    // default constructor
    Example()
    {
        cout << "This is a default constructor called omshivasai." << endl;
    }

    //  arrow (->) operator when accessing the private_data member variable in the constructor of the Example class.

    Example(int private_data)
    {

        this->private_data = private_data;
        cout << "//  arrow (->) operator when accessing the private_data member variable in the constructor of the Example class" << endl;
    }

    /*// will now try to access the public data member variable in the constructor of the Example class
    Example(int public_data)
    {

        this->public_data = public_data;

        cout << "    // will now try to access the public data member variable in the constructor of the Example class " << endl;
    }*/
    void public_function()
    {
        cout << "This is a public function." << endl;
        private_function();                                               // can access private member function
        cout << "The value of private_data is: " << private_data << endl; // can access private data member
    }

    int get_private_data()
    {
        return private_data;
    }

    void set_private_data()
    {
        private_data = 100;
    }
};

int main()
{
    // static object creation for the class

    Example obj;

    obj.set_private_data();

    cout << " size of object" << sizeof(obj) << endl;

    // can access private data member through public setter method
    cout << "The value of private_data is: " << obj.get_private_data() << endl; // can access private data member through public getter method

    // dynamically object creation for the class

    Example *s = new Example;

    s->set_private_data();

    cout << "The value of private_data is: " << s->get_private_data() << endl; // can access private in this way

    cout << "The value of private_data is: " << (*s).get_private_data() << endl; // can access private in this another way also your wish

    return 0;
}
