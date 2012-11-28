/*
    This file is part of SCSScript.

    Copyright (C) 2006-2012 by Nick Sharmanzhinov

    SCSScript is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    SCSScript is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with SCSScript.  If not, see <http://www.gnu.org/licenses/>.

    Nick Sharmanzhinov
    except134@gmail.com
*/

#pragma once

namespace SCSScript
{
	class Exception : public std::exception
	{
	private:
		String string;

	public:
		Exception(String str) : exception(), string(str)
		{
		#ifdef _DEBUG
			//if(IsDebuggerPresent())
			//	_CrtDbgBreak();
		#endif
		}

		const char* what() const
		{
			return string.c_str();
		}
	};
}