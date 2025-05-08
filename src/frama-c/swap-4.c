/*@
  requires \valid(a) && \valid(b);
  assigns *a, *b;
  ensures  *a == \old(*b) && *b == \old(*a);
*/
void swap(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int h = 42;

int main() {
  int a = 37;
  int b = 91;

  //@ assert h == 42;
  swap(&a, &b);
  //@ assert h == 42;
}
