#ifndef my_vector_h
#define my_vector_h
template <class T>
class vector
{	private:
		int m_size
		T*p_da;
		int MAX_CAP;
		static const int MAX=10;
	public:
		vector(int a_size = MAX);
		~vector();
		void push_back();
};
#endif //my_vector_h
