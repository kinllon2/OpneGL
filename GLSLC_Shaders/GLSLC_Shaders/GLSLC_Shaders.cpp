//��ɫ��(Shader)��������GPU�ϵ�С����
//��ЩС����Ϊͼ����Ⱦ���ߵ�ĳ���ض����ֶ����С��ӻ�����������˵����ɫ��ֻ��һ�ְ�����ת��Ϊ����ĳ���
//��ɫ��Ҳ��һ�ַǳ������ĳ�����Ϊ����֮�䲻���໥ͨ�ţ�����֮��Ψһ�Ĺ�ֻͨ��ͨ������������
#include<iostream>
#include<GL/glew.h>
using namespace std;


int main()
{
	int nrAttributes;
	glGetIntegerv(GL_MAX_VERTEX_ATTRIBS, &nrAttributes);
	std::cout << "Maximum nr of vertex attributes supported: " << nrAttributes << std::endl;
	return 0;
}