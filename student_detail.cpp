// created by - prince patel

#include<iostream>
#include<string>
class student{

     int rollNo;
     char name[50];
     float percent;

  public:
void get_data(int id, char n[], float per){
  rollNo = id;
  strcpy(name,n);
  percent = per;
      }
void put_data(){
  cout<<"student id is : "<<rollNo<<endl;
  cout<<"student name is : "<<name<<endl;
  cout<<"student percentage is : "<<percent<<endl;
      }
};
int main(){
 student s1,s2;
s1.get_data(101,"ABC",86.77);
s2.get_data(102,"XYZ",93.57);
cout<<"the valu =e of data member using s1 object "<<endl;
s1.put_data();
s2.put_data();

return 0;
}
