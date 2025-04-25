
class auto_parts{

	char serial[4];
	int yom;
	char mat[50];
	int quantity;

public:
	
	char audi[10] = { "AA0", 2005, "Iron", 20,
		"BB1", 2007, "Steel", 13,
		"BB2", 1992, "Aluminium", 57,
		"CC1", 2005, "Stainless Steel", 7,
		"CC6", 2007, "Steel", 34,
		"CC7", 2010, "Steel", 14 };
	
	void eng_info();


};