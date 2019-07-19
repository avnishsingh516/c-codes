
#include <iostream>
using namespace std;
int countMazePath(int sr,int sc,int er,int ec){
  if(sr==er and sc==ec){
    return 1;
  }

  if(sr>er or sc>ec){
    return 0;
  }

  int count =0;

  count+= countMazePath(sr+1,sc,er,ec);
  count+=countMazePath(sr,sc+1,er,ec);

  return count;
}
int main(int argc, char const *argv[])
{
  cout<<countMazePath(0,0,4,4)<<endl;
  return 0;
}
 