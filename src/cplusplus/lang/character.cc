#include <cstdio>
#include <cstring>
#include <cwchar>
#include <locale>
#include <clocale>

#define PRINT_SIZE(TYPE) std::printf("sizeof("#TYPE") = %ld\n", sizeof(TYPE))

int main(int argc, char *argv[]) {
  PRINT_SIZE(int);
  PRINT_SIZE(char);
  PRINT_SIZE(wchar_t);
  PRINT_SIZE(char16_t);
  PRINT_SIZE(char32_t);
  std::FILE *pf = std::fopen("testfile", "w");
  const char *msg = "中华人民共和国";
  std::setlocale(LC_ALL, "zh_CN.GB2312");
  std::fprintf(pf, "%s", msg);
  std::fclose(pf);
  return 0;
}
