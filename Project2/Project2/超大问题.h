#ifndef 1
#define 1

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
int is_match(int Dnumber, long long Dorigin_ip, long long Daim_ip, int oport, int aport,int Dprotocol int Rnumber, long long Rorigin_ip, long long Raim_ip, int oport_min, int oport_max, int aport_min, int aport_max, int Rprotocol);//�ж��Ƿ���Ϲ��򣬷��Ϸ��ع����

#endif // !1