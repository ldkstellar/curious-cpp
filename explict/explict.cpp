class A{
    public:
        A(int a){}
};
void B(A a){}

class C {
    public:
        explicit C(int c){}
};

void D(C c){}

int main(int argc, char const *argv[])
{
    B(10);// 이거자동으로 개체 생겨서 만든다 이를 방지하기 위한것이 explict이다.
    D(C(3));//D(11)x
    return 0;
}

