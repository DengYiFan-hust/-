#include<iostream>
#include<cstring>
using namespace std;

class Person{
        char IdPerson[19];                     
        char Name[20];                                
        char Sex;                              
        int Birthday;                          
        char HomeAddress[50];                
public:
        Person(char a[19],char b[20],char c,int d,char e[50]);
        Person(Person &);
        Person();
        ~Person();
       void PrintPersonInfo(); 
        void inputPerson();  
       
};

Person::Person(char *a,char *b,char c,int d,char *e)
{
	strcpy(IdPerson,a);
	strcpy(Name,b);
	Sex=c;
	Birthday=d;
	strcpy(HomeAddress,e);
}
Person::Person(Person&c)
{
	strcpy(IdPerson,c.IdPerson);
	strcpy(Name,c.Name);
	Sex=c.Sex; 
	Birthday=c.Birthday; 
	strcpy(HomeAddress,c.HomeAddress);
}
Person::Person()
{
	 IdPerson[0]='\0';  
	 Name[0]='\0';      
	 Sex=0;           
	Birthday=0;       
	 HomeAddress[0]='\0';
}
Person::~Person()
{
}

void Person::inputPerson(){
        
        cout<<"���������֤��,18λ���֣�"<<endl;
        cin.getline(IdPerson,19);
        cout<<"������������"<<endl;
        cin.getline(Name,20);
        cout<<"�������Ա�m��w��"<<endl;
        cin>>Sex;
        cout<<"����������,��ʽ1986��8��18��д��19860818��"<<endl;
        cin>>Birthday;
        cin.get();   
        cout<<"�������ַ��"<<endl;
        cin.getline(HomeAddress,50);
}
void Person::PrintPersonInfo(){
        int i;
        cout<<"���֤��:"<<IdPerson<<'\n'<<"����:"<<Name<<'\n'<<"�Ա�:";
        if(Sex=='m' ||Sex=='M')cout<<"��"<<'\n';
        else if(Sex=='w' ||Sex=='M')cout<<"Ů"<<'\n';
             else cout<<" "<<'\n';
        cout<<"����������:";
        i=Birthday;
        cout<<i/10000<<"��";
        i=i%10000;
        cout<<i/100<<"��"<<i%100<<"��"<<'\n'<<"��ͥסַ:"<<HomeAddress<<'\n';
}

int main(){
Person  Ps1("320102811226161","�캣��",'m',19811226,"�Ͼ��л���·1��"),
Ps2(Ps1),Ps3;
        Ps1.PrintPersonInfo();
        Ps2.PrintPersonInfo();
        Ps3.inputPerson();
        Ps3.PrintPersonInfo();
        return 0;
}
