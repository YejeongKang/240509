#include <iostream>
#include <string>

using namespace std;

#pragma once

class BankManager {

public:

	void setInfo(string branchID); // 지점 추가
	void deleteInfo(string branchID); // 지점 삭제
	string showInfo(string branchID); // 지점 정보 확인 => branchID 받아옴.

};