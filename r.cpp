#include<sstream>
#include<iostream>
#include<fstream>
#include<string>
#include<stdio.h>


using namespace std;
int main()
{
ifstream myfile;
string line;

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


int a[4][26];
for(int i=0;i<26;i++)
{
    a[1][i]=i+97;
    a[0][i]=0;
}
for(int i=0;i<26;i++)
{
printf(" %d %c ",a[0][i],a[1][i]);
}
int r;
while(getline(file,line))
{
int i=0;
for(i=0;line[i]!='\0';i++)
{
r=line[i]-'a';
a[0][r]++;
}
}

for(int i=0;i<26;i++)
{
printf("%d %c \n ",a[0][i],a[1][i]);
}
int j;
int low1,low2;
for(int i=1;i<26;i++)
{
    low1=a[0][i];
    low2=a[1][i];
    j=i-1;
    while((low1<a[0][j])&&(j>=0))
    {
        a[0][j+1]=a[0][j];
        a[1][j+1]=a[1][j];
        j--;
    }
a[0][j+1]=low1;
a[1][j+1]=low2;
}
printf("\n ");
for(int i=0;i<26;i++)
{
printf(" %d %c  ",a[0][i],a[1][i]);
}

int  total_words=0,count,i=0,s=0,len,wrong_word=0,correct_word=0;
string word;
   ifstream myfile ("s.txt");
    if (myfile.is_open())
    {

       while (getline(myfile,word))
        {
            //file opened
            //lets start the party
                  int j;
int low1,low2;
for(i=1;i<26;i++)
{
    low1=a[0][i];
    low2=a[1][i];
    j=i-1;
    while((low1<a[0][j])&&(j>=0))
    {
        a[0][j+1]=a[0][j];
        a[1][j+1]=a[1][j];
        j--;
    }
a[0][j+1]=low1;
a[1][j+1]=low2;
}

printf("\n ");
for(int i=0;i<26;i++)
{
printf(" %d %c  ",a[0][i],a[1][i]);
}








            total_words++;
            count=0;
            len=word.length();
            char temp[len];
            int s=0;
       for(i=0;i<len;i++)
            {
                temp[i]='_';
            }

            //Initial board printed
            i=0;
            s=0;
            int cp=0;
            while(cp<=6)
            {
            if(i<=25)
            {
            for(int j=0;j<len;j++)
            {
                if(char(a[1][25-i])==word[j])
                {
                  a[0][25-i]=a[0][25-i]-1;
                  if  (25<i) break;
                  temp[j]=word[j];
                  cp=cp-1;
                }

            }
            }
            cp++;
            i++;
            }
                if((word.compare(temp))==0)
                {
                correct_word++;
                }
                else
                {
                wrong_word++;
                }
                //if A[i]!=word[i]


printf("\n ");
for(int i=0;i<26;i++)
{
printf(" %d %c  ",a[0][i],a[1][i]);
}
       }
        myfile.close();


    }//end loop for word i.e i loop
            //chec


                                cout<<count<<" ";



        //no more word in file
        //no more drinks
        //party over

    cout<<"Total Words "<<total_words<<'\n';
    cout<<"Correct Guess "<<correct_word<<'\n';
    cout<<"Wrong Guess "<<wrong_word<<'\n';



}
