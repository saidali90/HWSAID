#include<iostream>
using namespace std;
class stu
{
    private:
    string name;
    int age;
    int mark;
    public:
    void input(){
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter age : ";
        cin>>age;
        if(age<0) throw "Erorr";
        cout<<"Enter mark : ";
        cin>>mark;
    }
    void print()
    {
        cout<<"the name :"<<name<<endl;
        cout<<"the age :"<<age<<endl;
        cout<<"the mark :"<<mark<<endl;
    }

};
int main(){

    try{
    stu s1;
    s1.input();
    s1.print();
}
    catch(const char *s)
        {
            cout<<s<<endl;
            return 0 ;
        }

}