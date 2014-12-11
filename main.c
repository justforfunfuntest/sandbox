
int foo(int a) {
  int* p;
  if (a) {
    *p;
  } else {
    p = &a;
  }
  return 0;
}

int main(int argc, const char* argv[] ) {

}
