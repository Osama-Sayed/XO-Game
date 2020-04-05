#include <iostream>
#include <string> 
#include <ctime>
using namespace std;
void put (string &num , char matrix[3][3] , char u);
void putc (string &num , char matrix[3][3] , char u);
bool check(char matrix[3][3]);
void shape ();
void putch (string &num , char matrix[3][3] , char u)
{
		time_t current_time;
	current_time = time(NULL);
		//**************************** The probabilities ****************************//
	if(matrix[0][1]==u && matrix[0][2]==u || (matrix[1][1]==u && matrix[2][2]==u) || (matrix[1][0]==u && matrix [2][0]==u))
		num="1";
	else if(matrix[0][0]==u && matrix[0][2]==u || (matrix[1][1]==u && matrix[2][1]==u) )
		num="2";
	else if(matrix[0][0]==u && matrix[0][1]==u || (matrix[1][1]==u && matrix[2][0]==u) || (matrix[1][2]==u && matrix [2][2]==u))
		num="3";
	else if(matrix[0][0]==u && matrix[2][0]==u || (matrix[1][1]==u && matrix[1][2]==u))
		num="4";
	else if(matrix[0][0]==u && matrix[2][2]==u || (matrix[2][0]==u && matrix[0][2]==u) || (matrix[1][0]==u && matrix [1][2]==u) || (matrix[0][1]==u && matrix [2][1]==u) )
		num="5";
	else if(matrix[0][2]==u && matrix[2][2]==u || (matrix[1][0]==u && matrix[1][2]==u) )
		num="6";
	else if(matrix[0][0]==u && matrix[1][0]==u || (matrix[2][1]==u && matrix[2][2]==u) || (matrix[1][1]==u && matrix[0][2]==u))
		num="7";
	else if(matrix[0][1]==u && matrix[1][1]==u || (matrix[2][0]==u && matrix[2][2]==u) )
		num="8";
	else if(matrix[0][0]==u && matrix[1][1]==u || (matrix[2][1]==u && matrix[2][0]==u) || (matrix[1][2]==u && matrix[0][2]==u))
		num="9";
	else
	num= (current_time %9)+'0'; 
	//**************************************************************************//

}
int main()
{
	string c;	
ret4:
		system("Title X O Game ");
	system("color f5");
	 cout<<"                \t\t\t\t       X  O Game"<<endl<<endl<<endl;
	cout<<" If you want to play with tow users Enter (1)"<<endl<<" If you want to play with computer Enter  (2)"<<endl;
	cin>>c;
	if (c == "1")
	{
	shape();
	char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
	//********************  Play with two users  ********************//
 char u1,u2;
string  num,ask ;
 ret:
 cout<<"Choose X Or O"<<endl;
 cin>>u1;
 if(u1=='X' || u1=='x')
 u2='O';
 else if(u1=='O' || u1=='o')          
 u2='X';
 else 
 {
 cout<<"Erorr"<<endl;
 goto ret ;
 }
 int count=0;

 do			{
	 if(count%2==0)
	{ 
		ret1:
		cout<<"player1 enter the position \n" ;
	 cin>>num;
	 if(num>"9")
	      {
	 cout<<"Please Enter number less than 10 "<<endl;
	 goto ret1;
	      }
	 else if(num<"0")
	 {
	 	 cout<<"Please Enter number greater  than 0 "<<endl;
	 goto ret1;
	 }
	 put(num , matrix , u1);
	 count++;
	 if(check(matrix)== 1)
	   {
		   cout<<"\a user1 win \n"<<"\a";
		   le:
	       	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0; 
		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le;
		   }
	   }
	 	  else if( count == 9 && check(matrix)==0)
	  {
	  		   cout<<"\a Drow !! \n"<<"\a";
			   le1:
	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0;
		   		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le1;
		   }
	  }

	}
	 else if(count%2!=0)
{	
	ret2:
	cout<<"player2 enter the position \n" ;
	 cin>>num; 
	 	 if(num >"9")
	 {
	 cout<<"Please Enter number less than 10 "<<endl;
	 goto ret2;
	 }
	  put(num , matrix , u2);
	count++;
	  if(check(matrix)== 1)
	   {
		   cout<<"\a user2 win \n"<<"\a";
		   le3:
	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0;
		   		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le3;
		   }
	   }
	  	  else if( count == 9 && check(matrix)==0)
	  {
	  		   cout<<"\a Drow !! \n"<<"\a";
			   le4:
	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0;
		   		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le4;
		   }
	  }
}
			}while(count<9);
      //**************************.................**************************//
	}
	else if(c=="2")
	{
         //********************  Play with computer  ********************//
		string level;
		ret10:
		cout<<"Enter (1) to Easy level"<<endl<<"Enter (2) to Hard level"<<endl;
		cin>>level;
		if(level=="1")
			//****************************Easy Level **********************//
		{
			shape();
		char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
      char u1,u2;
 string num ,ask;
  ret5:
 cout<<"Choose X Or O"<<endl;
 cin>>u1;
 if(u1=='X' || u1=='x')
 u2='O';
 else if(u1=='O' || u1=='o')
 u2='X';
 else 
 {
 cout<<"Erorr"<<endl;
 goto ret5 ;
 }
 int count=0;

 do			{
	 if(count%2==0)
	{ 
		ret6:
		cout<<"Enter the position \n" ;
	 cin>>num;
	 if(num>"9")
	      {
	 cout<<"Please Enter number less than 10 "<<endl;
	 goto ret6;
	      }
	 else if(num<"0")
	 {
	 	 cout<<"Please Enter number greater  than 0 "<<endl;
	 goto ret6;
	 }
	 put(num , matrix , u1);
	 count++;
	 if(check(matrix)== 1)
	   {
		   cout<<"\a user1 win \n"<<"\a";
		   le5:
	       	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0; 
		   		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le5;
		   }
	   }
	 	  else if( count == 9 && check(matrix)==0)
	  {
	  		   cout<<"\a Drow !! \n"<<"\a";
			   le6:
	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0;
		   		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le6;
		   }
	  }
	}
	 else if(count%2!=0)
{	
		time_t current_time;
	current_time = time(NULL);
	num= (current_time %9)+'0'; 
	  putc(num , matrix , u2);
	count++;
	  if(check(matrix)== 1)
	   {
		   cout<<"\a Computer win \n"<<"\a";
		   le7:
	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0;
		   		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le7;
		   }
	   }
	  	  else if( count == 9 && check(matrix)==0)
	  {
	  		   cout<<"\a Drow !! \n"<<"\a";
			   le8:
	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0;
		   		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le8;
		   }
	  }
}
			}while(count<9);
 }
		//********************************************************************************//
		else  if(level == "2")
			//*********************** Hard level ************************//
		{
			shape();
		char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
      char u1,u2;
 string num ,ask;
  ret8:
 cout<<"Choose X Or O"<<endl;
 cin>>u1;
 if(u1=='X' || u1=='x')
 u2='O';
 else if(u1=='O' || u1=='o')
 u2='X';
 else 
 {
 cout<<"Erorr"<<endl;
 goto ret8 ;
 }
 int count=0;

 do			{
	 if(count%2==0)
	{ 
		ret9:
		cout<<"Enter the position \n" ;
	 cin>>num;
	 if(num>"9")
	      {
	 cout<<"Please Enter number less than 10 "<<endl;
	 goto ret9;
	      }
	 else if(num<"0")
	 {
	 	 cout<<"Please Enter number greater  than 0 "<<endl;
	 goto ret9;
	 }
	 put(num , matrix , u1);
	 count++;
	 if(check(matrix)== 1)
	   {
		   cout<<"\a user1 win \n"<<"\a";
		   le9:
	       	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0; 
		   		   		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le9;
		   }
	   }
	 	  else if( count == 9 && check(matrix)==0)
	  {
	  		   cout<<"\a Drow !! \n"<<"\a";
			   le10:
	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0;
		   		   		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le10;
		   }
	  }
	}
	 else if(count%2!=0)
{	
		time_t current_time;
	current_time = time(NULL);
	putch(num , matrix , u1);
	  putc(num , matrix , u2);
	count++;
	  if(check(matrix)== 1)
	   {
		   cout<<"\a Computer win \n"<<"\a";
		   le11:
	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0;
		   		   		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le11;
		   }
	   }
	  else if( count == 9 && check(matrix)==0)
	  {
	  		   cout<<"\a Drow !! \n"<<"\a";
			   le12:
	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0;
		   		   		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le12;
		   }
	  }
}
			}while(count<9);
		
		}
		else
		{
			cout<<"Wrong choose Please Enter correct choose"<<endl;

			goto ret10;
		}
		  }
	else
	{cout<<"Wrong choose Please Enter correct choose"<<endl;
	goto ret4;
	}
	//*********************...........***********************..............********//
}
void shape ()
{
	system("Title X O Game ");
	system("color f5");
	 system("cls");
	//********************  Shape of matrix  ********************//
	 cout<<"                \t\t\t\t       X  O Game"<<endl;
 char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
	cout<<endl;
	cout<<"\t\t\t\t\t\t"<<"_____________________"<<endl<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(j==0)
				cout<<"\t\t\t\t\t\t"<<"| ";
			cout <<" "<<matrix[i][j]<<"  |  ";
		}
	cout<<endl<<"\t\t\t\t\t\t"<<"_____________________"<<endl<<endl;
	}
   //********************  ...................  ********************//

}
void put (string &num , char matrix[3][3] , char u)
{
	ret3:
if (matrix[0][0]=='1' && num =="1")
	matrix[0][0]=u;
else if (matrix[1][0]== '4'&& num=="4")
	matrix[1][0]=u;
else if (matrix[2][0]=='7'&&num=="7")
	matrix[2][0]=u;
else if (matrix[0][1]=='2'&&num=="2")
	matrix[0][1]=u;
else if (matrix[0][2]=='3'&&num=="3")
	matrix[0][2]=u;
else if (matrix[1][1]=='5'&&num=="5")
	matrix[1][1]=u;
else if (matrix[1][2]=='6'&&num=="6")
	matrix[1][2]=u;
else if (matrix[2][1]=='8'&&num=="8")
	matrix[2][1]=u;
else if (matrix[2][2]=='9'&&num=="9")
	matrix[2][2]=u;
else 
{
	cout<<"error \n" <<"Plese Enter in correct place"<<endl;
	cin>>num;
	goto ret3;
}

 system("cls");
	//********************  Shape of matrix  ********************//
 	system("Title X O Game ");
	system("color f5");
  cout<<"                \t\t\t\t       X  O Game"<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\t\t"<<"_____________________"<<endl<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(j==0)
				cout<<"\t\t\t\t\t\t"<<"| ";
			cout <<" "<<matrix[i][j]<<"  |  ";
		}
	cout<<endl<<"\t\t\t\t\t\t"<<"_____________________"<<endl<<endl;
	}
   //********************  ...................  ********************//


}
void putc (string &num , char matrix[3][3] , char u)
{
	ret3:
if (matrix[0][0]=='1' && num =="1")
	matrix[0][0]=u;
else if (matrix[1][0]== '4'&& num=="4")
	matrix[1][0]=u;
else if (matrix[2][0]=='7'&&num=="7")
	matrix[2][0]=u;
else if (matrix[0][1]=='2'&&num=="2")
	matrix[0][1]=u;
else if (matrix[0][2]=='3'&&num=="3")
	matrix[0][2]=u;
else if (matrix[1][1]=='5'&&num=="5")
	matrix[1][1]=u;
else if (matrix[1][2]=='6'&&num=="6")
	matrix[1][2]=u;
else if (matrix[2][1]=='8'&&num=="8")
	matrix[2][1]=u;
else if (matrix[2][2]=='9'&&num=="9")
	matrix[2][2]=u;
else 
{
			time_t current_time;

		current_time = time(NULL);
		num= (current_time %9)+'0';
	goto ret3;
}

 system("cls");
	//********************  Shape of matrix  ********************//
 	system("Title X O Game ");
	system("color f5");
  cout<<"                \t\t\t\t       X  O Game"<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\t\t"<<"_____________________"<<endl<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(j==0)
				cout<<"\t\t\t\t\t\t"<<"| ";
			cout <<" "<<matrix[i][j]<<"  |  ";
		}
	cout<<endl<<"\t\t\t\t\t\t"<<"_____________________"<<endl<<endl;
	}
   //********************  ...................  ********************//


}
bool check(char matrix[3][3])
{
if(matrix[0][0]==matrix[0][1]&& matrix[0][1]==matrix[0][2])
	return true ;
else if(matrix[0][0]==matrix[1][0]&& matrix[1][0]==matrix[2][0])
	return true ;
else if(matrix[0][0]==matrix[1][1]&& matrix[0][0]==matrix[2][2])
	return true ;
else if(matrix[1][0]==matrix[1][1]&& matrix[1][1]==matrix[1][2])
	return true ;
else if(matrix[2][0]==matrix[2][1]&& matrix[2][1]==matrix[2][2])
	return true ;
else if(matrix[0][2]==matrix[1][2]&& matrix[0][2]==matrix[2][2])
	return true ;
else if(matrix[1][0]==matrix[1][1]&& matrix[1][1]==matrix[1][2])
	return true ;
else if(matrix[0][2]==matrix[1][1]&& matrix[1][1]==matrix[2][0])
	return true ;
else if(matrix[0][1]==matrix[1][1]&& matrix[1][1]==matrix[2][1])
	return true ;

else
	return false ;


}

