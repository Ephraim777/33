#include<iostream>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

 class Functor
 {

 int count;

 int sum;

 public:

 Functor(): count(0), sum(0){}
 
void operator()(int num)
{
 
  if(num % 3== 0)
{
count++;
sum+= num;
}
}

 int get_count() const
 {
  
 return count;
  
 }
 
 int get_sum() const
 {
  
 return sum;
  
 }

 };
int main()
{
 
std::vector<int> vec = {4,1,3,6,25,54};

Functor myclass;

std::for_each(vec.begin(), vec.end(), std::ref(myclass));

std::cout<< "Count: "<< myclass.get_count() << std::endl;
 
std::cout<< "Sum: "<< myclass.get_sum() << std::endl;

return 0;
}
