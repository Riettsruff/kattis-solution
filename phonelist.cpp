#include <stdio.h>
#include <string>
#include <queue>
#include <cstring>

void execution() {
  std::priority_queue<std::string, std::vector<std::string>, std::greater<std::string>> pl;

  int n;
  scanf("%d", &n);

  while (n-- > 0) {
    char x[11];
    scanf("%s", x);
    pl.push(std::string(x));
  }

  std::string oldS = pl.top(); pl.pop();

  while (!pl.empty()) {
    std::string newS = pl.top(); pl.pop();

    if(!strncmp(newS.c_str(), oldS.c_str(), strlen(oldS.c_str()))) {
      printf("NO\n");
      return;
    } else oldS = newS;
  }

  printf("YES\n");
}

int main() {
  int n;
  scanf("%d", &n);

  while (n-- > 0) execution();

  return 0;
}

