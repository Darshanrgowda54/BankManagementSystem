#ifndef ENUM_H
#define ENUM_H


enum adminMenuOption
{
    CREATACCOUNT = 1,
    DELETEACCOUNT,
    UPDATEACCOUNT,
    VIEWACCOUNTDETAILS,
    SORTACCOUNTSTYPE,
    DISPLAYDELETEDACCOUNTS,
    LOGOUT
};


enum  updateAccountMenu{
    NAME = 1,
    MOBILENUMBER,
    EMAIL,
    ADDRESS,
    EXITFROMUPDATEDACCOUNT
} ;


enum mainMenuOption
{
    ADMIN = 1,
    USER,
    EXIT
};



enum userMenuOption
{
    DEPOSIT = 1,
    WITHDRAW,
    TRANSFER,
    CHECKBALANCE,
    VIEWTRANSACTIONHISTORY,
    EXITUSERMENU
};

enum returnStament
{
    FAILURE = 0,
    SUCCESS = 1
};

#endif
