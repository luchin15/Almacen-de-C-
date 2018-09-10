#include<cassert>
#include<cstring>
template<class myData>
myvector<myData>::myvector(int p_size):m_size(p_size)
{
	maxcap=m_size+delta_cap;
	p_data=new myData[maxcap];

}
template<class myData>
myvector<myData>::myvector(const myvector<myData> &v)
{
	m_size=v.m_size;
	maxcap=v.maxcap;
	p_data=new myData[maxcap];
	for(int i=0;i<m_size;i++)
	{
		p_data[i]=v.p_data[i];
	}
	memcpy (p_data,v.p_data,m_size*sizeof (myData));

}
template<class myData>
myvector<myData>::~myvector()
{
	delete[] p_data;
}
template<class myData>
void myvector<myData>::push_back(const myData &e)//reserve(maxcap+delta_cap)
{
	if(m_size==maxcap)
	{
		p_data[m_size++]=e;
	}
}
template<class myData>
void myvector<myData>::reserve(int p_cap)
{
	assert (p_cap>m_size); /// error de ejecucion
	myData*old_data=p_data;
	maxcap=p_cap;
	p_data=new myData[maxcap];
	for(int i=0;i<m_size;i++)
	{
		p_data[i]=old_data[i];
	}
}
template<class myData>
myData & myvector<myData>::operator[](int i)
{
	return p_data[i];
}
