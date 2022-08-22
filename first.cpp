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
        
        cout<<"请输入身份证号,18位数字："<<endl;
        cin.getline(IdPerson,19);
        cout<<"请输入姓名："<<endl;
        cin.getline(Name,20);
        cout<<"请输入性别m或w："<<endl;
        cin>>Sex;
        cout<<"请输入生日,格式1986年8月18日写作19860818："<<endl;
        cin>>Birthday;
        cin.get();   
        cout<<"请输入地址："<<endl;
        cin.getline(HomeAddress,50);
}
void Person::PrintPersonInfo(){
        int i;
        cout<<"身份证号:"<<IdPerson<<'\n'<<"姓名:"<<Name<<'\n'<<"性别:";
        if(Sex=='m' ||Sex=='M')cout<<"男"<<'\n';
        else if(Sex=='w' ||Sex=='M')cout<<"女"<<'\n';
             else cout<<" "<<'\n';
        cout<<"出生年月日:";
        i=Birthday;
        cout<<i/10000<<"年";
        i=i%10000;
        cout<<i/100<<"月"<<i%100<<"日"<<'\n'<<"家庭住址:"<<HomeAddress<<'\n';
}

int main(){
Person  Ps1("320102811226161","朱海鹏",'m',19811226,"南京市黄浦路1号"),
Ps2(Ps1),Ps3;
        Ps1.PrintPersonInfo();
        Ps2.PrintPersonInfo();
        Ps3.inputPerson();
        Ps3.PrintPersonInfo();
        return 0;
}
