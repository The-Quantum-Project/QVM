/*   Copyright (C) 2015 The Quantum Project
*
*      This program is free software: you can redistribute it and/or modify
*      it under the terms of the GNU General Public License as published by
*      the Free Software Foundation, either version 3 of the License, or
*      (at your option) any later version.
*
*      This program is distributed in the hope that it will be useful,
*      but WITHOUT ANY WARRANTY; without even the implied warranty of
*      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*      GNU General Public License for more details.
*
*      You should have received a copy of the GNU General Public License
*      along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <iostream>
#include <stdlib.h>
#include "Lexer.h"

using namespace std;

int main() {
    Lexer lexer;
    cout << lexer.getLex(Lexer::COMMA) << endl;

    Lexer::TokenType tokenType;
    while ((tokenType = lexer.nextToken()) != Lexer::NEOF && tokenType != Lexer::ERROR) {
        cout << lexer.getLex(tokenType) << endl;
    }

    system("PAUSE");
    return 0;
}