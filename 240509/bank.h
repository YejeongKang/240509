#include <iostream>
#include <string>

using namespace std; 

#pragma once

class bank {

private:
	string clientID;
	string address;
	string branchID;
	int numOfClient;
	int numOfActiveAccount;

public:
	void setInfo(string branchID); // ���� �߰�
	void deleteInfo(string branchID); // ���� ����
	string showInfo(); // ���� ���� Ȯ�� => branchID �޾ƿ�.

};