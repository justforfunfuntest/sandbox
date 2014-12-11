
int foo(int a) {
  int* p;
  if (a) {
    *p;
  } else {
    p = &a;
  }
  return 0;
}
