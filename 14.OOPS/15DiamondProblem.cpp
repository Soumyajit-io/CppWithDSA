//when 2 instance of base classes are present in the
//derived class.

// B derived A , C derived A and D derived B+C
//now D has 2 instance of A

// so we use virtual and D has 1 instance of A

class a{

    public:
    int aa = 1
}


class b:virtual public a{
    public:
    int bb = 1
}

class c:virtual public b{
    public:
    int cc = 1
}

class d : public b, public c{
    public:
    int dd = 1
}
