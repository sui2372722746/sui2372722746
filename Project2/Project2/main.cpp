#include"��������.h"
#include<iostream>

class Data {//����	
private:
	int Dnumber;//���ݱ��
	long long Dorigin_ip;
	long long Daim_ip;
	int oport;//ԭ�˿�
	int aport;//Ŀ��˿�
	int Dprotocol;
};

class Rule {//����
public:
	long long  origin_ip_change(long long Rorigin_ip);
	long long  aim_ip_change(long long Raim_ip);
	int protocol_change(int Rprotocol);
private:
	int Rnumber;//������
	long long Rorigin_ip;
	long long Raim_ip;
	int oport_min, oport_max;//���Ƕ˿ڷ�Χ
	int aport_min, aport_max;
	int Rprotocol;
};

int main(void)
{


	return 0;
}