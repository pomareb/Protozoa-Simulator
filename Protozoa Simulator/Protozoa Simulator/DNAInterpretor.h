#pragma once
#include <map>
#include <string>

enum reproductionType { scissionBinaire, bourgeonnement, division_multiple, heterogamie, conjugaison, autogamie, reproduction_sexuee };
enum locomotionType { pseudopodes, flagella, cilla, vacuole_contractile, membrane_ondulante, aucun };
enum digestionType { phagocytose, pinocytose , digestive_system};

class DNAInterpretor
{
	void mPoint();
	void mInsertion();
	void mDeletion();
	void mAmplification();
	void mLargeDeletion();

	typedef int (DNAInterpretor::*FuncPtr)(int a, int b);

	int func1(int a, int b);
	int func2(int a, int b);
	int func3(int a, int b);


	std::map<std::string, FuncPtr > DNAFunctions;

public:

	void setPtr(int v);
	void useFoo();


	void mutations();
	void DNARead();
	void DNAWrite();
	void reproduction(reproductionType);


	DNAInterpretor();
	~DNAInterpretor();
};

