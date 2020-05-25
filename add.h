class members
	string Name;
    string surname;
    string middlename;
    int id;
    int time;
void add;
	string Name; 
	string surname;
	string middlename;
	int id;
	int time;
//вот это все что ниже надо засунуть в перегрузку оператора ввода
	cout<<"введите имя сотрудника";
	cin>>Name;
	cout<<"введите фамилию сотрудника";
	cin>>surname;
	cout<<"введите отчество сотрудника";
	cin>>middlename;
	cout<<"введите id сотрудника";
	cin>>id;
	cout<<"введите время которое может отработать сотрудник за неделю";
	сin>>time;
//а ещё надо все таки сделать функцию ввода (которая будет вызываться из меню)
