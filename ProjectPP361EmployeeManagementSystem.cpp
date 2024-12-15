//Project #1: Employee Management System

/*
The objective of this project is to learn object oriented programming and its features. It is menu driven which allows us to add, update, delete and search record of an employee working in an organization. It stores Employee ID, name, post department and salary of employee. Initially, it has no data. Thus, we have to add employee records choosing appropriate option in this project(i.e. selecting option #1). This program uses EmpID as unique identifier(i.e primary key) to recognize employee. So, we can't add two employees having same ID. After Successful entry of records of some employee, we can search records on the basis of ID or department of our choice. We can search particular  employee from ID choosing option#2 and if we want to sell all employee working in a department, we have to choose another option (i.e. option#3 in menu). We can list all employee records also using option #4 in menu. Again, we can update and delete existing record. Thus, this project is useful to manage employee records in an organization.
*/

#include <iostream>
#include <string.h>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


const char* filename = "Employee.txt";

using namespace std;


class Employee
{
private:
    int emp_id;
    char name[30], post[30],department[10];
    float salary;
public:
    void ReadData();
    int GetID();
    void DisplayRecord();
    char* GetDepartment();
};

void Employee::ReadData()
{
    cout<<"\n Employee ID           : ";
    cin>> emp_id;

    cout<<"\n Employee Name         : ";
    cin.get();
    cin.getline(name,30);

    cout<<"\n Employee's Post       : ";
    cin.getline(post,30);

    cout<<"\n Employee's Department : ";
    cin.getline(department,10);

    cout<<"\n Employee's Salary     : ";
    cin>>salary;
}
int Employee::GetID()
{
    return emp_id;
}
char* Employee::GetDepartment()
{
    return department;
}

void Employee::DisplayRecord()
{
    cout<<"\n_________________________________________________________________ ";
    cout<<endl<<setw(5)<<emp_id<<setw(15)<<name<<setw(15)<<post<<setw(15)<<department<<setw(8)<<salary;
}

int main()
{
    Employee emp, e;
    char option,ch, dept[30];
    int id, isfound;

    fstream file;
    file.open(filename,ios::ate | ios::in | ios::out | ios::binary);

    do
    {

        cout<<"\n ************************ MENU *********************** ";
        cout<<"\n Enter Your Option : ";
        cout<<"\n 1 => Add a new Record. ";
        cout<<"\n 2 => Search Record From Employee ID. ";
        cout<<"\n 3 => List Employee Of Particular Department. ";
        cout<<"\n 4 => Display All Employee. ";
        cout<<"\n 5 => Update record of an Employee. ";
        cout<<"\n 6 => Delete record of particular employee. ";
        cout<<"\n 7 => Exit From Program. ";
        cout<<"\n  ==> ";
        cin>>option;

        switch(option)
        {
        case '1':
            emp.ReadData();
            file.seekg(0,ios::beg);
            isfound = 0;
            file.read((char *)&e,sizeof(e));

            while(!file.eof())
            {
                if(e.GetID() == emp.GetID())
                {
                    cout<<"\n This ID already exist ... Try for another ID ";
                    isfound = 1;
                    break;
                }
                file.read((char *)&e,sizeof(e));
            }
            if(isfound=1)
                break;
            file.clear();
            file.seekp(0,ios::end);
            file.write((char*)&emp, sizeof(emp));
            cout<<"\n New record has been added successfully... ";
            break;
        case '2':
            isfound = 0;
            cout<<"\n Enter ID of an employee to be searched.. \n ";
            cin>>id;
            file.seekg(0,ios::beg);
            file.read((char*)&e,sizeof(e));
            while(!file.eof())
            {
                if(e.GetID() == id)
                {
                    cout<<"\n The record is found. .. \n ";
                    cout<<endl<<setw(5)<<"ID"<<setw(15)<<"Name"<<setw(15)<<"Post"<<setw(15)<<"Department"<<setw(8)<<"salary";
                    e.DisplayRecord();
                    isfound = 1;
                    break;
                }
                file.read((char*)&e,sizeof(e));
            }
            file.clear();
            if(isfound == 0)
                cout<<"\n Data not found for employee ID# " <<id;
        case '3':
            isfound = 0;
            cout<<"\n Enter department name to list employee within it.";
            cin.get();
            cin.getline(dept,30);
            file.seekg(0,ios::beg);
            file.read((char*)&e,sizeof(e));
            while(!file.eof())
            {
                if(strcmp(e.GetDepartment(),dept)==0)
                {
                    cout<<"\n The record found for this department "<<endl;
                    cout<<endl<<setw(5)<<"ID"<<setw(15)<<"Name"<<setw(15)<<"Post"<<setw(15)<<"Department"<<setw(8)<<"Salary";
                    e.DisplayRecord();
                    isfound = 1;
                    break;
                }
                file.read((char*)&e,sizeof(e));
            }
            file.clear();
            if(isfound == 0)
                cout<<"\n Data Not Found for department "<<dept;
            break;

        case '4':
            cout<<"\n Record of Employee ";
            file.clear();
            file.seekg(0,ios::beg);
            int counter = 0;
            file.read((char *)&e,sizeof(e));
            while(!file.eof())
            {
                counter++;
                if(counter ==1)
                {

                    cout<<endl<<setw(5)<<"ID"<<setw(15)<<"Name"<<setw(15)<<"Post"<<setw(15)<<"Department"<<setw(8)<<"Salary";
                }
                e.DisplayRecord();
                file.read((char*)&e,sizeof(e));
            }
            cout<<endl<<counter <<" records found... ";
            file.clear();
            break;

        case '5':
            int recordno = 0;
            cout<<"\n File is being modified";
            cout<<"\n Enter Employee ID to be updated.";
            cin>>id;
            isfound = 0;
            file.seekg(0,ios::beg);
            file.read((char*)&e,sizeof(e));
            while(!file.eof())
            {
                recordno++;
                if(e.GetID() == id)
                {
                    cout<<"\n The old record of employee having ID "<<id<<"is:";
                    e.DisplayRecord();
                    isfound = 1;
                    break;
                }
                file.read((char*)&e,sizeof(e));
                }
                if(isfound == 0)
                {
                    cout<<"\n Data not found for employee ID#"<<id;
                    break;
                }
                file.clear();
                int location =(recordno-1)*sizeof(e);
                file.seekp(location,ios::beg);
                cout<<"\n Enter new record for employee having ID "<<id;
                e.ReadData();
                file.write((char*)&e, sizeof(e));
            break;

        case '6':
            recordno = 0;cout<<"\n Enter Employee ID to be deleted : ";
            cin>>id;
            isfound = 0;
        file.seekg(0,ios::beg);
        file.read((char*)&e,sizeof(e))
        while(!file.eof())
        {
            recordno++;
            if(e.GetID() == id)
            {
                cout<<" The old record of employee having id " <<id<<" is : ";
                e.DisplayRecord();
                isfound = 1;
            }
            file.read((char*)&e,sizeof(e));
        }
        char tempFile[] = "temp.txt";
        fstream temp(tempFile, ios::out | ios :: binary);
        if(isfound ==0)
        {
            cout<<" \n Data Not found for employee ID#"<<id;
            break;
        }
        else{
            file.clear();
            file.seekg(0,ios::beg);
            file.read((char*)&e,sizeof(e));
            while(!file.eof())
            {
                if(e.GetID() != ID)
                    temp.write((char*)&e,sizeof(e));
                file.read((char*)&e,sizeof(e));
            }
            file.close();
            temp.close();
            temp.open(tempFile,ios::in | ios::binary);
            file.open(filename,ios::out | ios :: binary);
            temp.read((char*)&e,sizeof(e));
            while(!temp.eof())
            {
                file.write((char*)&e,sizeof(e));
                temp.read((char*)&e,sizeof(e));
            }
        }
        temp.close();
        file.close();
        ]remove(tempFile);
        file.open(filename,ios::ate | ios::in | ios ::out | ios::binary);
        break;
        case '7':
            exit(0);
            break;

        default:
            cout<<"\n Invalid Options. ";
        }
        cout<<"\n Do you want to continue ... ? y/n ";
        cin>>ch;
    }while(ch == 'y');

    return 0;
}
