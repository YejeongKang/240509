#include <iostream>
#include <string>

using namespace std;

#pragma once

class ClientManager {
private:	
	int money;

public:

	void setInfo(string clientID); // 고객 추가
	void deleteInfo(string clientID); // 고객 삭제
	void showInfo(string clientID); // 고객 정보 확인
	void transAccount(int money, string clientID); // 어느 고객의 얼마를 송금할지
	bool openAccount(string clientID); // 계좌 개설 -> 개설 여부 확인
	bool checkAccount(); // 계좌 개설 여부 확인 

};
