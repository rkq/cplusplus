
#include <cstdio>
#include <cstring>
#include <clocale>
#include <ctime>
#include <cwchar>

int main(int argc, char *argv[]) {
  std::printf("current system locale: %s\n", std::setlocale(LC_ALL, nullptr));
  std::setlocale(LC_ALL, "");
  std::printf("current system locale: %s\n", std::setlocale(LC_ALL, nullptr));
  std::printf("%ls\n", L"你好");
  char buf[100];
  std::memset(buf, 0, sizeof(buf));
  std::scanf("%s", buf);
  std::printf("%ld\n", std::strlen(buf));
  std::printf("%s\n", buf);
  return 0;
}
