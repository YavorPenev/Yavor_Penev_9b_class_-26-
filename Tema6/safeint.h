typedef struct {
  int value;
  int errorflag;
} SafeResult;
// Явор 9б
SafeResult safeadd(int a, int b);
SafeResult safesubtract(int a, int b);
SafeResult safemultiply(int a, int b);
SafeResult safedivide(int a, int b);
SafeResult safestrtoint(char *argc);
int util(int sign, long long l);