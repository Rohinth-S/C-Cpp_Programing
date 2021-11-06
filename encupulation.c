
#include <iostream>

using namespace std;
class Employee{
private:    
    string Name;
    string Compuny;
    int Age;
    
public :
   void setName(string name) {
       Name = name ;
   }
   string getName(){
       return Name;
   }
   
   void setCompuny(string compuny) {
       Compuny = compuny;
   }
   string getCompuny(){
       return Compuny;
   }
   
   void setAge(int age) {
       Age = age ;
   }
   int getAge(){
       return Age;
   }
   
  void Introducryourself(){
      std::cout <<"Name - " << Name << std::endl;
      std::cout <<"Compuny - " << Compuny << std::endl;
      std::cout <<"Age - " << Age << std::endl;
  }  
  Employee(string name, string compuny , int age){
      Name = name;
      Compuny = compuny;
      Age = age;
  }
    
};

int main()
{
    
 Employee employee1 = Employee("subham", "youtube", 35);
 employee1.Introducryourself();
 
 employee1.setAge(39);
   std::cout << employee1.getName() << " is " << employee1.getAge() << " year old"<< std::endl;

}
