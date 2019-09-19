#include "Jarvis.hpp"

//using namespace std;

int main()
{
  //Robot r;
  //string s = r.Talk("hello");
  //volatile bool quit = false;
  //while(!quit)
  //{
  //  cout << "Me# ";
  //  cin >> str;
  //  std::string s = r.Talk(str);
  //  cout << "Jarvis$ " << s << endl;
  //}
  Jarvis *js = new Jarvis();
  //if(js->LoadEtc())
  //{
  //  return 1;
  //}
  js->LoadEtc();
  js->Run();
  return 0;
}
