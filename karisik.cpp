//#include <iostream>
//using namespace std;
//class Urun {
//protected:
//	string urunAdi;
//	double fiyat;
//public:
//	Urun(string _urunAdi, double _fiyat):urunAdi(_urunAdi), fiyat(_fiyat) {
//	
//	}
//	virtual void KDV()
//	{
//		cout << "�r�n fiyat�na KDV dahildir. \n";
//	}
//};
//
//class Tekstil: public Urun {
//private:
//	string turu;
//	char beden;
//public:
//	Tekstil(string _urunAdi, double _fiyat, char _beden, string _turu) : Urun(_urunAdi, _fiyat), beden(_beden), turu(_turu) {
//	 
//	}
//	void KDV()override {
//		double kdvdahil = fiyat + (fiyat * 0.20);
//		cout << "Tekstil:\n" << urunAdi << "Fiyat�: " << kdvdahil << "Beden: " << beden << "T�r: " << turu << endl;
//	}
//};
//class Teknoloji :public Urun {
//private:
//	string marka, model;
//public:
//	Teknoloji(string _urunAdi, double _fiyat, string _marka, string _model) :Urun(_urunAdi, _fiyat), marka(_marka), model(_model) {
//
//	}
//	void KDV()override {
//		double kdvdahil = fiyat + (fiyat * 0.20);
//		cout << "Teknoloji:\n " << urunAdi << "Fiyat�: " << kdvdahil << "Marka: " << marka << "Model: " << model << endl;
//	}
//};
//class Gida :public Urun {
//	string turu;
//	double gramaj;
//public:
//	Gida(string _urunAdi, string _turu, double _fiyat, int _gram) : Urun(_urunAdi, _fiyat), gramaj(_gram), turu(_turu) {
//
//	}
//	void KDV()override {
//		double kdvdahil = fiyat + (fiyat * 0.20);
//		cout << "Gida: \n" << urunAdi << "T�r�: " << turu << "Fiyat�: " << kdvdahil << "Gram�:" << gramaj << endl;
//	}
//};
//int main()
//{
//	setlocale(LC_ALL, "Turkish");
//	Tekstil t1("Pantolon", 2000, 'M', "Jean");
//	t1.KDV();
//	Teknoloji tek1("Telefon", 50000, "Apple", "Iphone 15");
//	tek1.KDV();
//	Gida g1("S�tla�", "F�r�nda", 20, 5);
//	g1.KDV();
//}


//#include <iostream>
//using namespace std;
//class Urun {
//protected:
//	string urunadi;
//	double fiyat;
//public:
//	Urun(string _urunadi, double _fiyat) : urunadi(_urunadi), fiyat(_fiyat) {
//
//	}
//	virtual void KDV() {
//		cout << "�r�n fiyatlar�na KDV dahildir." << endl;
//
//	}
//};
//class Tekstil : public Urun {
//private:
//	string model;
//	char beden;
//public:
//	Tekstil(string _urunadi, double _fiyat, string _model, char _beden) : Urun(_urunadi, _fiyat), beden(_beden) , model(_model) {
//
//	}
//	void KDV()override {
//		double kdvdahil = fiyat + (fiyat * 0.18);
//		cout << "Tekstil: \n" << " " << urunadi << " "<< "Fiyat: " << " " << kdvdahil <<" "<< "Model: " << " " << model<< " " << "Beden: " << " " << beden << endl;
//	}
//};
//class Teknoloji :public Urun {
//private: 
//	string marka, turu;
//public:
//	Teknoloji(string _urunadi, double _fiyat, string _marka, string _turu) : Urun(_urunadi, _fiyat), marka(_marka), turu(_turu) {
//
//	}
//	void KDV()override {
//		double kdvdahil = fiyat + (fiyat * 0.25);
//		cout << "Teknoloji: \n" << " " << urunadi << " "<< "Fiyat: " << " " << kdvdahil <<" "<<  "Marka: " << " " << marka <<" "<< "T�r�: " << " " << turu << endl;
//	}
//};
//class Gida : public Urun {
//private:
//	string yemekturu;
//	int gramaj;
//public:
//	Gida(string _urunadi, double _fiyat, string _yemekturu, int _gramaj) : Urun(_urunadi, _fiyat), yemekturu(_yemekturu), gramaj(_gramaj) {
//
//	}
//	void KDV()override {
//		double kdvdahil = fiyat + (fiyat * 0.10);
//		cout << "G�da: \n" << " " << urunadi <<" "<< "Fiyat: " << " " << kdvdahil<< " " << "Yemek T�r�: " << " " << yemekturu<< " " << "Gramaj: " << " " << gramaj << endl;
//	}
//
//};
//int main()
//{
//	setlocale(LC_ALL, "Turkish");
//	Tekstil t1("T-Shirt,", 300, "Skinny,", 'S');
//	t1.KDV();
//	Teknoloji tek1("Bilgisayar,", 30000, "Monster,", "Oyun Bilgisayar�");
//	tek1.KDV();
//	Gida g1("S�tla�,", 100, "Tatl�,", 400);
//	g1.KDV();
//}

//#include <iostream>
//using namespace std;
//class Urun {
//protected:
//	string urunadi;
//	double fiyat;
//public:
//	Urun(string _urunadi, double _fiyat): urunadi(_urunadi),fiyat(_fiyat) {
//
//	}
//	virtual void KDV() {
//		cout << "�r�n fiyatlar�na KDV dahildir." << endl;
//	}
//
//};
//class Plak : public Urun {
//private:
//	string sanatci, sarkituru;
//	int devir;
//public:
//	Plak(string _urunadi, double _fiyat, string _sanatci, string _sarkituru,int _devir) : Urun(_urunadi, _fiyat), sanatci(_sanatci), sarkituru(_sarkituru), devir(_devir) {
//
//	}
//	void KDV()override {
//		double kdvdahil = fiyat + (fiyat * 0.5);
//		cout << "Plak: \n" << " " << urunadi << " " << "Fiyat�: " << kdvdahil << " " << "Sanat��: " << sanatci<< " " << "�ark� T�r�" << " " << sarkituru << " " << devir << " Devir" << " " << endl;
//	}
//};
//class CD :public Urun {
//private:
//	string sanatci2, sarkituru2;
//public:
//	CD(string _urunadi, double _fiyat, string _sanatci2, string _sarkituru2) : Urun(_urunadi, _fiyat), sanatci2(_sanatci2), sarkituru2(_sanatci2) {
//
//	}
//	void KDV()override {
//		double kdvdahil = fiyat + (fiyat * 0.25);
//		cout << "CD: \n" << " " << urunadi << " " << "Fiyat�: " << kdvdahil << " " << "Sanat��: " << " "<< sanatci2 << " " << "�ark� T�r�" << " " << sarkituru2 << endl;
//	}
//};
//class Kaset : public Urun {
//private:
//	string sanatci3, sarkituru3;
//public:
//	Kaset(string _urunadi, double _fiyat, string _sanatci3, string _sarkituru3) : Urun(_urunadi, _fiyat), sanatci3(_sanatci3), sarkituru3(_sarkituru3) {
//
//	}
//	void KDV()override {
//		double kdvdahil = fiyat + (fiyat * 0.2);
//		cout << "Kaset: \n" << " " << urunadi << " " << "Fiyat�: " << kdvdahil << " " << "Sanat��: " << " " << sanatci3 << " " << "�ark� T�r�: " << " " << sarkituru3 << endl;
//	}
//
//};
//int main()
//{
//	setlocale(LC_ALL, "Turkish");
//	Plak p1("Discovery, ", 700, "Daft Punk, ", "Electronic, ",45);
//	p1.KDV();
//	CD c1("Bir, ", 200, "Pentagram, ", "Metal");
//	c1.KDV();
//	Kaset k1("Abbey Road, ", 200, "The Beatles, ", "Psychedelic Rock");
//	k1.KDV();

//}

#include <iostream>
using namespace std;
class Urun {
protected:
	string urunadi;
	double fiyat;
public:
	Urun(string _urunadi, double _fiyat) : urunadi(_urunadi), fiyat(_fiyat) {

	}
	virtual void KDV() {
		cout << "�r�n fiyatlar�na KDV dahildir." << endl;
	}

};
class Plak : public Urun {
private:
	string sanatci, sarkituru;
	int devir;
public:
	Plak(string _urunadi, double _fiyat, string _sanatci, string _sarkituru, int _devir) : Urun(_urunadi, _fiyat), sanatci(_sanatci), sarkituru(_sarkituru), devir(_devir) {

	}
	void KDV()override {
		double kdvdahil = fiyat + (fiyat * 0.5);
		cout << "Plak: \n" << " " << urunadi << " " << "Fiyat�: " << kdvdahil << " " << "Sanat��: " << sanatci << " " << "�ark� T�r�" << " " << sarkituru << " " << devir << " Devir" << " " << endl;
	}
};
class CD :public Urun {
private:
	string sanatci2, sarkituru2;
public:
	CD(string _urunadi, double _fiyat, string _sanatci2, string _sarkituru2) : Urun(_urunadi, _fiyat), sanatci2(_sanatci2), sarkituru2(_sanatci2) {

	}
	void KDV()override {
		double kdvdahil = fiyat + (fiyat * 0.25);
		cout << "CD: \n" << " " << urunadi << " " << "Fiyat�: " << kdvdahil << " " << "Sanat��: " << " " << sanatci2 << " " << "�ark� T�r�" << " " << sarkituru2 << endl;
	}
};
class Kaset : public Urun {
private:
	string sanatci3, sarkituru3;
public:
	Kaset(string _urunadi, double _fiyat, string _sanatci3, string _sarkituru3) : Urun(_urunadi, _fiyat), sanatci3(_sanatci3), sarkituru3(_sarkituru3) {

	}
	void KDV()override {
		double kdvdahil = fiyat + (fiyat * 0.2);
		cout << "Kaset: \n" << " " << urunadi << " " << "Fiyat�: " << kdvdahil << " " << "Sanat��: " << " " << sanatci3 << " " << "�ark� T�r�: " << " " << sarkituru3 << endl;
	}

};
int main()
{
	setlocale(LC_ALL, "Turkish");
	string sanatci, sanatci2, sanatci3, sarkituru, sarkituru2, sarkituru3, urunadi;
	double fiyat;
	int rpm;
	cout << "Sat�n alaca��n�z pla��n ad�n�, fiyat�n�, sanat��s�n�, �ark� t�r�n�, devirini giriniz" << endl;
	cin >> urunadi;
	cin >> fiyat;
	cin >> sanatci;
	cin >> sarkituru;
	cin >> rpm;
	Plak p1(urunadi, fiyat, sanatci, sarkituru, rpm);
	p1.KDV();
}



// 



//#include <iostream>
//using namespace std;
//class Urun {
//protected:
//	string urunadi;
//	double fiyat;
//public:
//	Urun(string _urunadi, double _fiyat) : urunadi(_urunadi), fiyat(_fiyat) {
//
//	}
//	virtual void KDV() {
//		cout << "�r�n fiyat�na KDV dahildir." << endl;
//	}
//};
//class Metallica : public Urun {
//private:
//	string albumlistesi;
//public:
//	Metallica(string _urunadi, double _fiyat, string _albumlistesi) : Urun(_urunadi, _fiyat), albumlistesi(_albumlistesi) {
//
//	}
//	void KDV()override {
//		double kdvdahil = fiyat + (fiyat * 0.5);
//		cout << "�r�n: \n" << " " << urunadi << " " << "Fiyat�: " << " " << kdvdahil << " " << "Alb�m listesi: \n" << " " << albumlistesi;
//	}
//};
//class Pentagram :public Urun {
//private:
//	string albumlistesi2;
//public:
//	Pentagram(string _urunadi, double _fiyat, string _albumlistesi2) : Urun(_urunadi, _fiyat), albumlistesi2(_albumlistesi2) {
//
//	}
//	void KDV()override {
//		double kdvdahil = fiyat + (fiyat * 0.2);
//		cout << "�r�n: \n" << " " << urunadi << " " << "Fiyat�: " << " " << kdvdahil << " " << "Alb�m listesi: \n" << " " << albumlistesi2;
//	}
//};
//int main()
//{
//	setlocale(LC_ALL, "Turkish");
//	int islem;
//	string albumlist = "Master of Puppets \n Ride the Lightning \n Kill em All \n Metallica \n 72 Seasons \n Death Magnetic \n Lulu \n ...And Justice For All \n Garage Inc. \n Reload \n Load \n Hardwired \n Some Kind of Monster \n";
//	string albumlist2 = "Pentagram \n Trail Blazer \n Anatolia \n Popcular D��ar� \n Unspoken \n Bir \n 1987 \n MMXII\n Akustik \n Makina Elektrika \n";
//	cout << "Ma�azam�za ho�geldiniz !" << endl;
//	cout << "Hangi sanat��n�n alb�m�n� g�r�nt�lemek istersiniz ?" << endl;
//	cout << "1. Metallica" << endl;
//	cout << "2. Pentagram " << endl;
//	cin >> islem;
//	if (islem == 1) {
//		Metallica m1("Metallica\n", 1200, albumlist);
//		m1.KDV();
//		
//	}
//	if (islem == 2) {
//		Pentagram p1("Pentagram\n", 700, albumlist2);
//		p1.KDV();
//		
//	}
//}