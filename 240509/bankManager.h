#include <iostream>
#include <string>

using namespace std;

#pragma once

class BankManager {

public:

	void setInfo(string branchID); // ���� �߰�
	void deleteInfo(string branchID); // ���� ����
	string showInfo(string branchID); // ���� ���� Ȯ�� => branchID �޾ƿ�.

};