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
	void setInfo(string clientID, string name, string branchID, int account, int tel); // °í°´ Ãß°¡
	void deleteInfo(string clientID); // °í°´ »èÁ¦
	string showInfo(); // °í°´ Á¤º¸ È®ÀÎ => clientID ¹Þ¾Æ¿È.
	void openAccount();
	string checkAccount();
	void transAccount();

};
