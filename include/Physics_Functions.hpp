#ifndef __Physics_Functions_hpp_
#define __Physics_Functions_hpp_

#include <vector>
#include <string>

//1. Units:
	//Energy
	extern const double GeV,eV,keV,MeV,TeV,erg,Joule;
	//Mass
	extern const double gram,kg;
	//Length
	extern const double a0,cm,meter,km,fm,pb,parsec,kpc,Mpc;
	//Time
	extern const double sec,minute,hour,day,year;
	//Temperature
	extern const double Kelvin;
	//degree to rad
	extern const double deg;

//2. Specific Parameters:
	//Masses
	extern const double mPlanck,GNewton,GFermi,aEM,mProton,mElectron,mNucleon, Elementary_Charge;
	//Geographic Parameters
	extern const double mEarth,rEarth,rhoEarth,rhoCrust;
	//Solar Parameters
	extern const double mSun,rSun;
	//Dark Matter Halo Parameters
	extern double v0,vesc,vEarth,rhoDM, Nesc;
	//Reference momentum transfer
	extern const double qRef;

//3. Unit Conversion
	extern double In_Units(double quantity, double dimension);

//4. Simple Physics functions
	extern double Reduced_Mass(double m1,double m2);
	extern double DM_Speed_Distribution(double v,double vEarth);	

#endif







