#include <iostream>
#include <string>
using namespace std;

class demo
{
    public:
      demo(){cout<<" default Destructor called"<<endl;};
      demo(const std::string&);
      //demo(const demo& obj);
      virtual ~demo(){
          cout<<"Destructor called"<<endl;
            delete age;
      };
      demo(const demo& obj);
      demo& operator=(const demo& obj);
      demo operator+( demo& obj);
      string getName();
      void setName(string);
      void setAge(int);
      int getAge() const;

    private:
      string name{"default"};
      int* age{new int};//deliberately made it pointer
};
demo::demo( const std::string& val)
     :name(val)
{
    cout<<"Overloaded Constructor Called\n";
}
demo::demo(const demo& obj)
{
    cout<<"Copy Constructor Called\n";
    this->name = obj.name;
    this->age = new int;
}
demo&
demo::operator=(demo const& obj)
{
    if(this->age)
    {
        delete age;
    }
    this->name = obj.name;
    this->age = new int;
 
}
demo
demo::operator+(demo & obj)
{
    demo tmp;
    tmp.name = name+obj.name;
    if(tmp.age != nullptr)
    {
        delete tmp.age;
    }
    tmp.age = new int;
    int newAge = this->getAge() + obj.getAge();
    tmp.setAge(newAge);
    return tmp;
}
string
demo::getName()
{
    cout<<__PRETTY_FUNCTION__<<endl;
    return name;
}
void
demo::setName(string val)
{   
    cout<<__PRETTY_FUNCTION__<<endl;
    name = val;
}
void
demo::setAge(int val)
{
    cout<<__PRETTY_FUNCTION__<<endl;
    if(age)
    {
        *age = val;
    }
    else
    {
        cout<<"Memory not allocated to member"<<endl;
    }
}
int 
demo::getAge() const
{
    return *age;
}
void display( demo obj)
{
    cout<<"Name that is displayed is "<<obj.getName()<<endl;
}
int main()
{
    demo object("ravi");
    object.setAge(26);
    demo object2=object;
   // object2 = object;
    object2.setName("varma");
    object2.setAge(26);
    display(object2);
    demo object3 = object+object2;
    cout<<"CObmined name"<<object3.getName()<<endl;
    cout<<"Combined Age"<<object3.getAge()<<endl;

    return 0;
}
