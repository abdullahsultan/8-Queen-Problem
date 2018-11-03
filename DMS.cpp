#include<iostream>
#include<stdlib.h>
using namespace std;

int row=0,col=0,queens=0;
int my_array[8][8];
void queen();
int check();
void nuller();
void outer();

int main()
{
  for (int  i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      my_array[i][j]=0;
    }}
    queen();
  }

  void queen()
  {
    cout<<endl<<"row = "<<row<<endl<<"col = "<<col<<endl;
    int ch=check();
    if(ch==1)
    {
      my_array[row][col]=1;
      queens++;
      col++;row=0;
    //  outer();
    }
    if(ch==0 && row==7)
    {nuller();cout<<"Nuller called \n";}
    else if(ch==0)
    {
      if(row<8)
      row++;
    }
    if(queens<8)
    {
      outer();
      queen();
    }
  }

  int check()
  {
    int x,y;
//    for(y=row,x=col;y<8;y++)
//    {if(my_array[x][y]==1)
//    return 0;}
//    for(y=row,x=col;y>=0;y--)
//    {if(my_array[x][y]==1)
//    return 0;}
//    for(x=col,y=row;x<8;x++)
//    {if(my_array[x][y]==1)
//    return 0;}
    for(x=col,y=row;x>=0;x--)
    {if(my_array[x][y]==1)
    return 0;}
//    for(x=col,y=row;x<8 && y<8;x++,y++)
//    {if(my_array[x][y]==1)
//    return 0;}
    for(x=col,y=row;x>=0 && y>=0;x--,y--)
    {if(my_array[x][y]==1)
    return 0;}
    for(x=col,y=row;x<8 && y>=0;x++,y--)
    {if(my_array[x][y]==1)
    return 0;}
//    for(x=col,y=row;x>=0 && y<8;x--,y++)
//    {if(my_array[x][y]==1)
//    return 0;}

    return 1;

  }

  void nuller(){
    col--;
    int x=col;
    for(int y=0;y<8;y++)
    {
      if(my_array[x][y]==1)
      {
        my_array[x][y]=0;
        row=y+1;queens--;
        break;
      }
    }
  }

  void outer()
  {
  //  system ("CLS");
   cout<<"\n \n \n";
    int x,y;
    for(x=0;x<8;x++)
    {
      for(y=0;y<8;y++)
      {
        cout<<my_array[x][y]<<"  ";
      }
      cout << "\n";
    }
  }
