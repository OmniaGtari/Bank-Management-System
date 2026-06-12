

#include <iostream>
using namespace std;
#include "linkedlistmeth.cpp"
#include "employee.h"
#include "transaction.h"    

doublylist* loans1 = createdoublylist();
doublylist* loans2 = createdoublylist();
doublylist* loans3 = createdoublylist();
doublylist* loans4 = createdoublylist();
doublylist* loans5 = createdoublylist();

void initialize_account(doublylist* loans1, doublylist* loans2 , doublylist* loans3, doublylist* loans4, doublylist* loans5) {
    loan l11 = { 1000, "Car", 10000, 5, 2000, 8000, "2025-01-01", "2028-01-01", "Active" };
    loan l12 = { 1001, "Home Loan", 200000, 5, 50000, 150000, "2020-01-15", "2040-01-15", "Active" };
    loan l21 = { 1002, "Car Loan", 30000, 7, 10000, 20000, "2021-05-10", "2026-05-10", "Active" };
    loan l22 = { 1003, "Personal Loan", 15000, 12, 5000, 10000, "2022-03-01", "2025-03-01", "Active" };
    loan l31 = { 1004, "Education Loan", 40000, 6, 15000, 25000, "2019-09-01", "2029-09-01", "Active" };
    loan l32 = { 1005, "Business Loan", 100000, 8, 60000, 40000, "2018-07-20", "2028-07-20", "Active" };
    loan l41 = { 1006, "Mortgage Loan", 250000, 4, 250000, 0, "2000-02-01", "2020-02-01", "Closed" };
    loan l42 = { 1007, "Travel Loan", 10000, 10, 2000, 8000, "2023-06-15", "2026-06-15", "Active" };
    loan l51 = { 1008, "Medical Loan", 5000, 9, 5000, 0, "2021-01-01", "2023-01-01", "Closed" };
    loan l52 = { 1009, "Agriculture Loan", 60000, 7, 30000, 30000, "2020-11-11", "2030-11-11", "Active" };
    loan l53 = { 1010, "Credit Card Loan", 2000, 15, 500, 1500, "2024-02-01", "2025-02-01", "Active" };
    insertdoublylist(loans1, l11, 1);
    insertdoublylist(loans1, l12, 2);
    insertdoublylist(loans2, l21, 1);
    insertdoublylist(loans2, l22, 2);
    insertdoublylist(loans3, l31, 1);
    insertdoublylist(loans3, l32, 2);
    insertdoublylist(loans4, l41, 1);
    insertdoublylist(loans4, l42, 2);
    insertdoublylist(loans5, l51, 1);
    insertdoublylist(loans5, l52, 2);
    insertdoublylist(loans5, l53, 3);
};


Account array_customer[10000] = {
        { 1001, "Current", "TN59 1000 0000 0001 2345 6789", 1, "Ahmed Ben Salah", "01/01/2024", "Active", 2500},
        { 1002, "Savings", "TN59 1000 0000 0002 9876 5432", 2, "Leila Trabelsi", "15/03/2024", "Active", 12000 },
        { 1003, "Business", "TN59 1000 0000 0003 4567 8910", 3, "karim kallel", "20/05/2024", "Active", 50000},
        { 1004, "Student", "TN59 1000 0000 0004 1111 2222", 1, "Mariem Jlassi", "10/09/2024", "Inactive", 300 ,{ 4, "Auto Loan", 25000, 6, 5000, 20000, "2025-03-01", "2030-03-01", "Completed" },{ 4, 1001, "withdrawal", 300, "2025-11-23" }},
        { 1005, "Current", "TN59 1000 0000 0005 3333 4444", 2, "Hichem Kacem", "05/11/2024", "Closed", 10,{ 5, "Business Loan", 100000, 7, 20000, 80000, "2024-07-15", "2034-07-15", "Overdue"},{ 5, 1001, "deposit", 750, "2025-11-24" }},
};
Employee array_employee [10000]= {
        {1, "Ahmed", "Ben Salah", "12 Habib Bourguiba Avenue, Tunis", 2500.0, "01/01/2023", 1},
        {2, "Leila", "Trabelsi", "Marseille Street, Sfax", 3200.0, "15/03/2022", 2},
        {3, "Hichem", "Kacem", "Farhat Hached Avenue, Bizerte", 2800.0, "20/05/2024", 3}
};
// the customer interface 
int login(Account array_customer[], int acc_number, int size) {
    int test = -1;
    int i = 0;
    while (test==-1 && i < size) {
        if (array_customer [i].Number == acc_number)
            test = i;
        i++;
    };
    return test;
};
void customer_interface(Account array_customer [], int size, int c) {
    cout << "welcome to customer intefrace !" << endl;
    cout << "______________________________________________" << endl;
    cout << "______________________________________________" << endl;
    cout << "______________what do you want________________" << endl;
    cout << "______________________________________________" << endl;
    cout << "______________________________________________" << endl;
    cout << "         1- view the list of loans            " << endl;
    cout << "         2- submit a new loan                 " << endl;
    cout << "         3- Withdrow money                    " << endl;
    cout << "         4- Deposit money                     " << endl;
    cout << "______________________________________________" << endl;
    cout << "______________________________________________" << endl;
    int operation;
    cin >> operation;
    if (operation == 1) {
       //displayList(&L);//list of loans of the customer ;
    }
    else if (operation == 2) {
        cout << "________________________________________" << endl;
        cout << "________________________________________" << endl;
        cout << " enter the amount of money to withdraw :" << endl;
        cout << "________________________________________" << endl;
        cout << "________________________________________" << endl;
        cout << "            choice 1: 10                " << endl;
        cout << "            choice 2: 20                " << endl;
        cout << "            choice 3: 50                " << endl;
        cout << "________________________________________" << endl;
        cout << "________________________________________" << endl;
		int choice;
        cin >> choice;
        if (choice == 1) {
            //withdraw 10
			array_customer [c].Balance -= 10;
        }
        else if (choice == 2) {
            //withdraw 20
            array_customer [c].Balance -= 20;
        }
        else if (choice == 3) {
            //withdraw 50
            array_customer [c].Balance -= 50;
        }
    }
    else if (operation == 3) {
		cout << "_______________________________________" << endl;
        cout << "_______________________________________" << endl;
        cout << " enter the amount of money to deposit :" << endl;
        cout << "_______________________________________" << endl;
        cout << "_______________________________________" << endl;
        int amount;
        cin >> amount;
		//deposit amount
		array_customer [c].Balance += amount;
    }


}
int main()
{
    cout << "|____________________________________________________________| " << endl;
    cout << "|____________________________________________________________| " << endl;
    cout << "|__________welcome to the Banking Management System__________| " << endl;
    cout << "|____________________________________________________________| " << endl;
    cout << "|____________________________________________________________|" << endl;
    cout << "|                  1-Cutomer intefrace                       | " << endl;
    cout << "|                  1-Emplpyee intefrace                      |" << endl;
    cout << "|____________________________________________________________|" << endl;
    cout << "|____________________________________________________________| " << endl;
    cout << "|                  3-Exist                                   |" << endl;
    cout << "|____________________________________________________________|" << endl;
    cout << "|____________________________________________________________|" << endl;
    cout << "               where do you want to enter ?                   " << endl;
    int r;
    cin >> r;
    int size = sizeof(array_customer) / sizeof(array_customer[0]);
    if (r == 1) {
        cout << "enter your account number :";
        int acc_number;
        cin >> acc_number;
        int c = login(array_customer, acc_number, size);
        if (c>=0) {
            cout << "login successful!" << endl;
            customer_interface(array_customer, size, c);
        }
    }








}


