 /* BonkEnc Audio Encoder
  * Copyright (C) 2001-2005 Robert Kausch <robert.kausch@bonkenc.org>
  *
  * This program is free software; you can redistribute it and/or
  * modify it under the terms of the "GNU General Public License".
  *
  * THIS PACKAGE IS PROVIDED "AS IS" AND WITHOUT ANY EXPRESS OR
  * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
  * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE. */

#ifndef _H_FILTER_IN_AU_
#define _H_FILTER_IN_AU_

#include "inputfilter.h"

namespace BonkEnc
{
	class FilterInAU : public InputFilter
	{
		public:
				 FilterInAU(Config *, Track *);
				~FilterInAU();

			bool	 Activate();
			bool	 Deactivate();

			int	 ReadData(unsigned char **, int);

			Track	*GetFileInfo(String);
	};
};

#endif
