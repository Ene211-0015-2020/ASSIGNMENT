1 #include <iostream>
2
3 using namespace std;
4
5 class COMPUTER {
6 public:
7 void Printer(){
8 cout<<"It is connected to a Printer"<<endl;
9 }
10 };
11 class CLIENT:public COMPUTER {
12 };
13 class SERVER:public COMPUTER{
14 };
15
16 int main()
17 {
18 COMPUTER COMPUTER;
19 COMPUTER.Printer();
20
21 CLIENT CLIENT;
22 CLIENT.Printer();
23
24 SERVER SERVER;
25 SERVER.Printer();
26
27 return 0;
28 }
