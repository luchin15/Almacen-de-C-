#ifndef myvector_h
#define myvector_h
template<class myData>
class myvector
{
private:
	myData *p_data;
	int m_size;
	int maxcap;
	static const int delta_cap=10;
public:
	myvector(int p_size=0);		//constructor por defecto
	myvector(const myvector &v);	//constructor copia
	virtual ~myvector();

	void push_back(const myData &e);
	void reserve(int p_cap);
	void resize(int p_size);
	myData &operator[](int i);
};
#include "myvector.inl"
#endif //myvector_h
