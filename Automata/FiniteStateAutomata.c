/*
    MadParserGenerator - This program generates a parser from a context
    free grammar and tokens defined by the user.

    Copyright (C) 2017  Daniel Gabriel Madatovian

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "FiniteStateAutomata.h"


void changeState(FiniteStateAutomata fsa, int input){
	fsa.currentState = fsa.stateTable[fsa.currentState][input];
}

int isInFinalState(FiniteStateAutomata fsa){
	return fsa.finalStates[fsa.currentState];
}

void destroyFSA(FiniteStateAutomata *fsa){
	return;
}

void addStateTransition(FiniteStateAutomata fsa, int state, int input, int nextState){
	if(state < fsa.numberOfStates && nextState < fsa.numberOfStates){
		fsa.stateTable[state][input]=nextState;
	}
}

void addFinalState(FiniteStateAutomata fsa, int state){
	if(state < fsa.numberOfStates) fsa.finalStates[state]=1;
}
