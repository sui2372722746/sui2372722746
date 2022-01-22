#ifndef 1
#define 1

class Data {//数据	
private:
	int Dnumber;//数据编号
	long long Dorigin_ip;
	long long Daim_ip;
	int oport;//原端口
	int aport;//目标端口
	int Dprotocol;
};

class Rule {//规则
public:
	long long  origin_ip_change(long long Rorigin_ip);
	long long  aim_ip_change(long long Raim_ip);
	int protocol_change(int Rprotocol);
private:
	int Rnumber;//规则编号
	long long Rorigin_ip;
	long long Raim_ip;
	int oport_min, oport_max;//表是端口范围
	int aport_min, aport_max;
	int Rprotocol;
};
int is_match(int Dnumber, long long Dorigin_ip, long long Daim_ip, int oport, int aport,int Dprotocol int Rnumber, long long Rorigin_ip, long long Raim_ip, int oport_min, int oport_max, int aport_min, int aport_max, int Rprotocol);//判断是否符合规则，符合返回规则号

#endif // !1