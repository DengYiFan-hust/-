#include <iostream>
#include <string>
using namespace std;
//����д���д��룬��ϸ�Ķ�Ҫ��
//��ʾ�û�������Ӧ������������û�ѡ���ͼ�����͡����볤�ȼ����������������ʾΪ���ף����Ϊƽ�����ס�
void area_square()
{
}
void area_rectangle()
{

}
void area_triangle()
{
}
void area_circle()
{
}

int main()
{
	int unit,shape;
	float length,high,width,diameter;//��λ,��״����(�����α߳��������εĳ��������εĵ�)���ߣ�����ֱ��
	cout<<"ͨ�����������"<<endl;
	cout<<"��ѡ��ͼ��: 1�������Σ�2�������Σ�3�������Σ�4��Բ��"<<endl;
	cin>>shape;
	cout<<"��ѡ��Ҫ��������ĵ�λ��1��cm��2��inch";
	cin>>unit;//unit���ڶ��û��������ݽ��е�λת����һ�����Ϊcm,�ұ�����λС��

	switch(shape)
	{
	case 1:area_square();break;
	case 2:area_rectangle();break;
	case 3:area_triangle();break;
	case 4:area_circle();break;
	return ;
	}

}