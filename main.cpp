#include <iostream>
#include <string>
#include <cstdlib>

void alphabeto(char*);

int main(int argc, char** argv)
{
  setlocale(LC_ALL, "Portuguese");
  std::string b;
  if(!argv[1]) getline(std::cin, b);
  else b = argv[1];
  fflush(stdin);
  char a[25];
  char tmp[25];
  alphabeto(a);
  int l = b.size();

  for(int i = 0; i <= l; ++i)
	tmp[i] = b[i]+3;
  for(int i = 0; i <= l; ++i){
	std::cout << tmp[i];
	fflush(stdin);
  }
  putchar('\n');
  return 0;
}

void alphabeto(char a[25])
{
  for(int i = 65; i <= 65+25; ++i){
	static int j = 0;
	a[j] = i;
	j++;
	}
}
