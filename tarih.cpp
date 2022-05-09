#include <iostream>
#include"tarih.h"
using namespace std;

	/*int tarih::kontrolgun(int)const{


	}
*/
	tarih::tarih(){}
	tarih::~tarih(){
		cout<<"silinecek tarih nesnesi: "<<gun<<"/"<<ay<<"/"<<yil<<endl;
	}
	int tarih::getgun(){
		return gun;
	}
	void tarih::setgun(int gun){
		this->gun=gun;
	}

	int tarih::getay(){
		return ay;
	}
	void tarih::setay(int ay){
		this->ay=ay;
	}

	int tarih::getyil(){
		return yil;
	}
	void tarih::setyil(int yil){
		this->yil=yil;
	}

	void tarih::tarihyazdir()const{
		cout<<gun<<"/"<<ay<<"/"<<yil<<endl;
	}
	tarih::tarih(int gun=1 ,int ay=1,int yil=2000){
		this->gun=gun;
		this->ay=ay;
		this->yil=yil;
	}