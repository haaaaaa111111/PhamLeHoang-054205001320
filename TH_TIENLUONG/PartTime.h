#pragma once
#include"Employee.h"
class PartTime :public TienLuong
{
private:
	int soGioLamTuan;
	int mucLuongMoiGio;
public:
	PartTime();
	PartTime(string, string, string, string, int, int, int);
	void  thongTinTienLuong() const;
	bool isTienLuongGi() const;
};
