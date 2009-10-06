
/*
    Copyright 2008-2009, Romain Behar <romainbehar@users.sourceforge.net>

    This file is part of Shrimp 2.

    Shrimp 2 is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Shrimp 2 is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Shrimp 2.  If not, see <http://www.gnu.org/licenses/>.
*/


#include "console.h"


void console::print (std::string Line) {

	m_text.push_back (Line);
}

std::string console::get_lines (const unsigned int N) {

	std::string text ("");

	// find first line to return the N last ones
	int start = 0;
	if (N < m_text.size()) {
		start = m_text.size() - N;
	}

	std::vector<std::string>::iterator i = m_text.begin() + start;
	for (; i != m_text.end(); ++i) {
		text += "\n" + *i;
	}

	return text;
}


