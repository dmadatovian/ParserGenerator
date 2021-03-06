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

#ifndef FSAFROMFILE
#define FSAFROMFILE
#include "FiniteStateAutomata.h"
#include <stdio.h>
/**	Parses a finite state automata from a "dfsa" file.
	See the README for a more detailed description on
	what formatting is required for the file to be 
	read correctly. */
FiniteStateAutomata* parseFSAFromFile(char*);
int** initializeStateTable(int,int);
int countStates(FILE*);
void readStateTransitions(FILE*,int**);
#endif
