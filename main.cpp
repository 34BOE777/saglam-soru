#include <iostream>
//#include"tarih.h"
#include"calisan.h"
using namespace std;


int main()
{
	tarih t1(12,12,2000);
	tarih t2(20,1,2020);
	t1.tarihyazdir();
	t2.tarihyazdir();
	calisan c1("beşir","aslan",t1,t2);
	c1.calisanyazdir();
	return 0;
}
