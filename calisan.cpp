#include <iostream>
#include"calisan.h"
//#include"tarih.h"
using namespace std;

calisan::~calisan(){
	cout<<"silinecek nesne: "<<getad()<<" "<<getsoyad()<<endl;
}

	string calisan::getad(){
		return ad;
	}
	void calisan::setad(string ad){
		this->ad=ad;
	}

	string calisan::getsoyad(){
		return soyad;
	}
	void calisan::setsoyad(string soyad){
		this->soyad=soyad;
	}
/*
	tarih calisan::getdogumtarih()const{//tarih * getdogumtarih(){return doğum tarihi}
		return dogumtarihi;
	}
	void calisan::setdogumtarihi(tarih dogumtarihi)const{
		
	}		

	tarih calisan::getisegiristarihi()const{
		return isegiristarihi;
	}
	void calisan::setisegiristarihi(tarih)const{
		this->isegiristarihi=isegiristarihi;
	}
*/
	calisan::calisan(const string &adi,const string &soyadi,const tarih &dt,const tarih &ig)
	:ad(adi),soyad(soyadi),dogumtarihi(dt),isegiristarihi(ig){
		cout<<ad<<" "<<soyad<<endl;
	}
	void calisan::calisanyazdir()const{
		cout<<"Ad: "<<ad<<"  Soyad: "<<soyad<<"Doğum tarihi: ";
		dogumtarihi.tarihyazdir();
		cout<<"İşe giriş tarihi: ";
		isegiristarihi.tarihyazdir();

	}