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
	void setInfo(string branchID); // 지점 추가
	void deleteInfo(string branchID); // 지점 삭제
	string showInfo(); // 지점 정보 확인 => branchID 받아옴.

};