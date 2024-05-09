#include <iostream>
#include <string>

using namespace std;

#pragma once

class client {

private:
	string clientID;
	string name;
	string manageBranchID;
	string phoneNumber;
	string accountNumber;

public:
	void setInfo(string clientID, string name, string branchID, int account, int tel); // �� �߰�
	void deleteInfo(string clientID); // �� ����
	string showInfo(); // �� ���� Ȯ�� => clientID �޾ƿ�.
	void openAccount();
	string checkAccount();
	void transAccount();

};
