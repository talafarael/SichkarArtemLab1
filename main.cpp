#include <iostream>
#include <string>
using namespace std;
int main()
{
   setlocale(LC_ALL, "Russian");
  std::cout<<"ведите рост в метрах";
  double height;
  
  std::cin>>height;

  std::cout<<"ведите вес вкило";
  double weight;
  
  std::cin>>weight;
  double BMI=weight/height/height;
//   std::cout<<BMI;
  if(BMI<=25&&BMI>=18)
  std::cout<<"ваш вес в норме";
  else if(BMI<=18)
  std::cout<<"сегодян ветрено вам лушче не выходит из дома";
  else
  std::cout<<"вы толстый";
  return 0;}