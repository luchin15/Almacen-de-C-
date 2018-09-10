//#ifndef student_h
//#define student_h
#include <iostream>

using namespace std;
class Student
{
	public:
		Student();
		Student(string pname,string pcode,int page);		//CONSTRUCTOR ALTERNATIVO
		Student(const Student &s);		//CONSTRUCTOR COPIA
		~Student(){};		//DESTRUCTOR
		void inscribirse();		//metodo o accion
	private:
		string name;
		string code;
		int age;
};
Student::Student()
{
	name=" ";
	code="N/A";
	age=0;
}
Student::Student(string pname,string pcode,int page)	//Cuerpo Constructor altenativo
{
	name=pname;
	code=pcode;
	age=page;
}
Student::Student(const Student &s)		//Cuerpo Constructor copia
{
	name=s.name;
 	code=s.code;
 	age=s.age;
 }
 void Student::inscribirse()
{	cout<<"---------Inscribiendo mis datos---------"<<endl;
	cout<<"Nombre del alumno:"<<name<<endl;
	cout<<"Codigo: "<<code<<endl;
	cout<<"Edad: "<<age<<"años"<<endl;
	cout<<"----------"<<endl;
}
int main()
{

	Student t("MARIO","704",18);
	Student r=t;
	Student j;
	t.inscribirse();
	j.inscribirse();
	r.inscribirse();
	return 0;
}