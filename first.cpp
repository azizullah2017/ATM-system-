# include<iostream>
# include<fstream>
# include<string>
# include<conio.h>
using namespace std;
int main()
{
	cout << "\t\t\tSEMESTER PROJECT "<<endl;
cout<<" Group members are \n 1.AZIZULLAH\n 2.SADAM HUSSAIN\n 3.REHMATULLAH\n"<<endl;
cout<<"**********************************"<<endl;

	double acountn,check_a;
	int bal=0,check_b=0;
	string pin="\0",check_pin;
	cout<<"Please enter your atm card number: "<<endl;
	cin>>acountn;
	ifstream input("input_file.txt");
	while(!input.eof())
	{
		input>>check_a;
		input>>check_pin;
		input>>check_b;
		
		if(check_a==acountn)
		{
			int count=0;
			do{
			cout<<"Plz enter your pin code: "<<endl;
			char ch;
			pin="\0";
			for(int i=0;i<4;i++)
			{
				ch=_getch();
				cout<<"*";
				pin=pin+ch;
			}
			cout<<endl;
			if(pin==check_pin)
			{
				cout<<"Enter the transaction amount : "<<endl;
				cin>>bal;
				if(bal<=check_b)
					{
						check_b=check_b-bal;
						cout<<"Your transaction is successfully completed : "<<endl;
						cout<<"Your new account balance is : "<<" Rs. "<<check_b<<endl;
				}
				else
					cout<<"Do not have much amount in your account"<<endl;
			}
			else
				cout<<"**********************************"<<endl;
				cout<<"Your entered pin code is not correct please try again: "<<endl;
			
			count++;
			}while(count<4&&pin!=check_pin);
			if(count==4)
				{
					cout<<"Your account is block temperorily"<<endl;
					cout<<"Please take your atm card "<<endl;
					main();
			}
			
		}
		} 
	cout<<"Your Card is not valid "<<endl;
	main();
	system("pause");
}




