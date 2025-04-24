int h = 42;

//@ requires 0 <= h <= 100 ;
int main() {
  //@ assert h == 42 ;
}

//@ requires 0 <= h <= 100 ;
void foo() {
  //@ assert h == 42 ;
}
