template<typename T, typename U> class Foo {
    T m_member;
    T* m_member_ptr;
    T m_member_arr[1];
};

void bar(Foo<int, int> foo);
