#include<iostream>
#include<string>
#include"tarih.h"
using namespace std;
class calisan{
private:
	string ad,soyad;
	const tarih dogumtarihi;
	const tarih isegiristarihi;
public:
	//calisan();
	~calisan();

	string getad();
	void setad(string);

	string getsoyad();
	void setsoyad(string);
/*
	tarih getdogumtarihi()const;
	void setdogumtarihi(tarih)const;

	tarih getisegiristarihi()const;
	void setisegiristarihi(tarih)const;
*/
	calisan(const string &,const string &,const tarih &,const tarih &);
	void calisanyazdir()const;


};