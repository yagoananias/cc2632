int sub(int, int);
int quad(int);

int main() {
  int a=10, b=3, resFunc1, resFunc2;

  resFunc1 = sub(a, b);
  printf("Res Sub %d\n", resFunc1);
  resFunc2 = quad(resFunc1);
  printf("Res Quad %d\n", resFunc2);

  return 0;
}

int sub(num1, num2) {
  int result;
  result = num1 - num2;

  return result;
}

int quad(num1) {
  int result;
  result = num1 * num1;

  return result;
}