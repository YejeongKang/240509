#include <iostream>
#include <string>

using namespace std;

#pragma once

class ClientManager {
private:	
	int money;

public:

	void setInfo(string clientID); // �� �߰�
	void deleteInfo(string clientID); // �� ����
	void showInfo(string clientID); // �� ���� Ȯ��
	void transAccount(int money, string clientID); // ��� ���� �󸶸� �۱�����
	bool openAccount(string clientID); // ���� ���� -> ���� ���� Ȯ��
	bool checkAccount(); // ���� ���� ���� Ȯ�� 

};
