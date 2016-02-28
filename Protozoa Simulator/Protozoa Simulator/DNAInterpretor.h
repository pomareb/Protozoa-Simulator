#pragma once

enum reproductionType { scissionBinaire };
enum locomotionType { pseudopodes, flagella, cils, vacuole_contractile, membrane_ondulante, aucun };
enum digestionType { phagocytose, pinocytose };

class DNAInterpretor
{
public:
	void mutations();
	void DNARead();
	void DNAWrite();
	void reproduction(reproductionType);


	DNAInterpretor();
	~DNAInterpretor();
};

