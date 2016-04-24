﻿#include<iostream>
#include<QVector>

#include"file_read.h"
#include"o_date.h"
#include"sp3_date.h"
#include"clock_date.h"
#include"math_function.h"
#include"readfilepath.h"
#include"ppp_calculate.h"
#include"ppp_date.h"
#include"snx_date.h"
#include"antmod_date.h"
using namespace std;

int main()
{
    o_file_date ofile;
    sp3_file sp3;
    file_read read;
    clock_file clock;
    ppp_calculate pppCalculate;
    ppp_file ppp;
    snx_date snx;
    antmod_file ant;
    /*
     * QVector<QString> filePath;
     * QString pathName ="C://PPP//readFile//sp3";
     * QString fileType = "*.sp3";
     * readFilePath::readFile(filePath,pathName,fileType);
     */
    /*
    read.ppp_snx_read("C:/PPP/readFile/snx/igs14P1783.snx",snx,"CAS1");
    pppCalculate.set_station_coordinate(snx);
    read.ppp_o_read("C://PPP//readFile//oFile//cas11680.15o",ofile);
    read.ppp_sp3_read("C:/PPP/readFile/sp3/gbm18493.sp3",sp3);
    read.ppp_clock_read("C:/PPP/readFile/clk/gbm18493.clk",clock);
    pppCalculate.ppp_coordinate_clock(ofile,sp3,clock,ppp);
    */
    read.ppp_ant_read("C:/PPP/readFile/ant/antmod.dat",ant);
    cout << "END!";
}
