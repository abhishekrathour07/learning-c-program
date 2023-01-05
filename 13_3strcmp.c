#include<stdio.h>
#include<string.h>
int cmpstr(char s1[10], char s2[10]) {
    int i = strlen(s1);
    int k = strlen(s2);
    int bigger;
    if (i < k) {
      bigger = k;
    }
    else if (i > k) {
      bigger = i;
    }
    else {
      bigger = i;
    }
    for (i = 0; i < bigger; i++) {
      if (s1[i] == s2[i]) {
      }
      else {
        return (s1[i] - s2[i]);
      }
    }
    return (0);
  }

  int main() {
    char str1[10] = "Abhishek";
    char str2[10] = "Abhishek";
    printf(" %d", cmpstr(str1, str2));
    return 0;
    }
  