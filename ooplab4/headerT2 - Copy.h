
class bank
{
	int acno;
	char nm[100], acctype[100];
	float bal;
public:
	bank(int acc_no, char *name, char *acc_type, float balance)  
	{
		acno = acc_no;
		strcpy_s(nm, name);
		strcpy_s(acctype, acc_type);
		bal = balance;
	}
	void deposit();
	void withdraw();
	void display();
};
