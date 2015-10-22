*** Q1 What's A class?**
*Programmin is a very ore thing which cant deal with any example in our real life, A class is the way to connect programming with real life examples by creating objects, thats why it is called oop ( object oriented programming)*

*** Q2 How does a class accomplish abstraction, encapsulation, and data hiding? **
*You can achieve that by using the header files technique and also the private and public scopes which differs and hides the very details from the user, but still Implemented by the implementer, and thats how we can sell codes by now, allowing the user only to modify the header file.*

*** Q3  What is the relationship between an object and a class? ?**
*The class is the type, an object is an example or something physical of the class, example: class Human, we here defined a type of data called human, whats left is to create the human himself by giving him his name for example Human Ismael;*

*** Q4 In what way, aside from being functions, are class function members different from class data members? ?**
* Each object created has got its own specs, example, Human Ismael; Human Mohammed; We here got one type of data which is human and two humans called mohammed and ismael, to access the data inside them we will use the public functions created example Ismael.Set_Age(25); which is different from Mohammed.SetAge(10);*

*** Q5  Deﬁne a class to represent a bank account. Data members should include the depositor’s name, the account number (use a string), and the balance. Member functions should allow the following: n Creating an object and initializing it. n Displaying the depositor’s name, account number, and balance n Depositing an amount of money given by an argument n Withdrawing an amount of money given by an argument Just show the class declaration, not the method implementations. ?**
**class BankAccount** { 
**private:**
char name[35]; 
 char Account_Number[20];
 **public:**
  BankAccount(const char * Name, const char * Number, long float Amount);
  
void show_balance() ;
void deposit(double Amount);
void withdraw(double Amount);
};

*** Q6 When are class constructors called? When are class destructors called? ?**
*constructor is called once you make the object to modify its data specs, destructor is called when you want to delete it ie: object expires*

*** Q7  Provide code for a constructor for the bank account class from Chapter Review Question 5. ?**

BankAccount::BankAccount(const char * Name, const char * Number, long float Amount)	
 { 
 strncpy(name, Name, 34);
  name[34] = '\0'; 
  strncpy(Account_Number, Number, 19);
   acctnum[19] = '\0'; Balance= bal;
}

*** Q8  What is a default constructor? What is the advantage of having one? ?**
*default constructor is the constructor that auto initialize the object allowing you to declare them without initializing them, and having one allows you to create array of objects *

*** Q9 Modify the Stock class deﬁnition so that it has member functions that return the values of the individual data members. *** Q10  What are this and *this?**
*class Stock { private: std::string company; 
long shares; 
double share_val; 
double total_val; 
void set_tot() { total_val = shares * share_val; }
 **public:** 
 Stock(); 
 Stock(const std::string & co, long n, double pr);
 ~Stock() {}
 void buy(long num, double price);
 void sell(long num, double price);
 void update(double price);
 void show() const; const Stock & topval(const Stock & s) const;
 int numshares() const { return shares; }
 double shareval() const { return share_val; }
 double totalval() const { return total_val; }
 const string & co_name() const { return company; } 
 };
*

*** Q10  What are this and *this? **
*this is a pointer that points to the class ,*this points to the object itself.*

