struct B{
  B(int x = 2): field(x){}
  int field;
};

struct A {
  A(int x = 1): field_int(x), field_int_const(3), field_B(2*x){}
  A& operator=(const A& x){
    field_int = x.field_int;
    field_B = x.field_B;
    return *this;
  }
  int field_int;
  const int field_int_const;
  B field_B;
  static int static_field;
};

extern int global_int;
extern A global_A;
extern const A global_A_const;

namespace ns{
  struct A {
    A(): field(2){} ;
    int field;
    static int static_field;
  };
  extern int global_var;
}
