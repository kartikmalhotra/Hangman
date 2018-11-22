#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string>
#include <sstream>


using namespace std;
int main()
{
int pl,i,r,j;
ifstream myfile;
string ch,line;
char a;
cout<<"Enter a word\n";
cin >>ch;
r=ch.length();
string p;
char c[30][30]={
{'a','a','a','a','s','e','e','e','e','e','e','e','i','i','i','i','i','i','i','i'},
{'i','o','e','e','e','s','s','s','s','i','i','i','e','e','e','e','e','s','e','o'},
{' ','e','o','s','a','a','i','i','i','s','s','s','n','t','t','t','t','e','t','e'},
{' ','i','i','o','r','r','a','a','r','r','n','n','t','s','n','s','n','t','o','t'},
{' ','m','t','i','o','i','r','r','a','a','a','t','s','n','s','n','s','o','n','r'},
{' ','h','s','r','i','o','n','n','n','n','r','a','a','a','o','a','o','n','a','s'},
{' ','n','u','l','l','l','t','t','t','t','t','r','o','o','a','o','a','r','s','a'},
{' ','u','p','t','t','n','o','o','o','o','o','o','r','r','r','r','r','a','r','n'},
{' ','s','r','n','n','t','l','l','l','l','l','l','l','l','l','l','l','l','l','c'},
{' ','t','n','u','u','d','d','d','c','c','c','c','c','c','c','c','c','c','c','l'},
{' ','y','d','d','d','u','u','c','d','d','u','p','p','p','p','p','p','p','p','p'},
{' ','b','b','p','c','c','c','u','u','u','d','u','u','u','u','u','u','m','m','h'},
{' ','l','g','m','y','m','g','g','g','g','p','m','m','m','m','m','m','u','u','u'},
{' ','p','m','h','p','p','p','m','m','m','m','d','g','d','d','h','h','h','h','m'},
{' ','x','y','c','m','g','m','p','p','p','g','g','d','h','h','d','d','d','d','y'},
{' ','d','l','b','h','h','h','h','h','h','h','h','h','g','g','y','g','g','g','d'},
{' ','f','h','k','g','b','b','b','b','b','b','y','y','y','y','g','y','y','y','g'},
{' ','r','w','g','b','y','y','y','y','y','y','b','b','b','b','b','b','b','b','b'},
{' ','w','f','y','k','k','f','f','f','f','f','v','v','v','v','v','v','v','v','z'},
{' ','g','c','w','f','f','k','k','v','v','v','f','f','f','f','f','f','z','f','v'},
{' ','j','k','f','w','w','w','w','k','k','k','z','z','z','z','z','z','f','z','f'},
{' ','k','x','v','v','v','v','v','w','w','w','k','x','x','x','x','x','x','x','k'},
{' ',' ','v','j','z','z','z','z','z','z','z','w','k','k','w','w','q','q','k','k'},
{' ',' ','j','z','x','x','x','x','x','x','x','x','w','w','k','q','w','w','j','j'},
{' ',' ','z','x','j','j','j','q','q','q','q','q','q','q','q','k','j','k','q','q'},
{' ',' ','q','q','q','q','j','j','j','j','j','j','j','j','j','j','k',' ','w',' '}}
;

if(r==1)myfile.open("output1.txt");
else if(r==2)myfile.open("output2.txt");
else if(r==3)myfile.open("output3.txt");
else if(r==4)myfile.open("output4.txt");
else if(r==5)myfile.open("output5.txt");
else if(r==6)myfile.open("output6.txt");
else if(r==7)myfile.open("output7.txt");
else if(r==8)myfile.open("output8.txt");
else if(r==9)myfile.open("output9.txt");
else if(r==10)myfile.open("output10.txt");
else if(r==11)myfile.open("output11.txt");
else if(r==12)myfile.open("output12.txt");
else if(r==13)myfile.open("output13.txt");
else if(r==14)myfile.open("output14.txt");
else if(r==15)myfile.open("output15.txt");
else if(r==16)myfile.open("output16.txt");
else if(r==17)myfile.open("output17.txt");
else if(r==18)myfile.open("output18.txt");
else if(r==19)myfile.open("output19.txt");
else if(r==20)myfile.open("output20.txt");
else if(r==21)myfile.open("output21.txt");
char f;
int flag=0;
flag=0;
char h[100];
j=0;
int count=0,co=0;
string s;
int k=0;
char y;
while(1)
{
    flag=0;
    co=0;
    if(count>6)
    {
        cout<<"you lose";
        break;
    }
    for(i=0;i<r;i++)
    {
     if(h[i]=='\0')
       co=1;
    }
    if(co==0){printf("you win");
    break;
    }
    f=c[j][r-1];
    flag=0;
    //cout<<f<<'\n';
    for(int k=0;k<r;k++)
    {
    if(ch[k]==f)
        {
            h[k]=f;
            flag=1;
            y=k;
        }
    }
    if(flag==1)
    {
    while(getline(myfile,line))
    {
            if(line[y]==f)
            {
            cout<< "hi";
            cout<< char(j);
            string base1("short");
  //             s =j;
            string base2(".txt");
            cout<<s<<endl;
            ofstream outfile("short.txt",ios::app);
            outfile<<line<<'\n';
            outfile.close();
            }
    }
    }

    if(flag==0)
    {
    count++;
    }
    j++;
    myfile.open(s.c_str());
}
}


