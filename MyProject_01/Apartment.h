//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Apartment.h
//  @ Date : 2017/6/26
//  @ Author : 
//
//


#if !defined(_APARTMENT_H)
#define _APARTMENT_H
#include <QString>

class Apartment {
public:
    Apartment(QString _ID, QString _name, QString _manager, QString _rank);
	void setID(QString _ID);
	void setName(QString _name);
	void setManager(QString _manager);
	void setRank(int _rank);
    QString getID();
    QString getName();
    QString getManager();
    QString getRank();
    //bool search(QString _name);

private:
	QString ID;
	QString name;
	QString manager;
    QString rank;
};

#endif  //_APARTMENT_H
