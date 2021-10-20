#ifndef TOKENFSA_H
#define TOKENFSA_H
class Table {
	public:
		int tokenTable [22][23] =  {{ 0,  1,  1, -1,  2,  3,  5,  6,  7,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21,  0},
				       	    { 1, -1,  1,  1,  1,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101},
				            { 2, -1, -1, -1,  2,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102},
					    { 3,103,103, -1,103,  4,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103},
 		 			    { 4,104,104, -1,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104},
					    { 5,105,105, -1,105,105,105,105,105,105,105,105,105,105,105,105,105,105,105,105,105,105,105},
					    { 6,106,106, -1,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,160,160,160},
					    { 7,107,107, -1,107,  8,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107},
					    { 8,108,108, -1,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108,108},
					    { 9,109,109, -1,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109},
					    {10,110,110, -1,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110},
					    {11,111,111, -1,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111},
					    {12,112,112, -1,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112},
					    {13,113,113, -1,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113},
					    {14,114,114, -1,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114},
					    {15,115,115, -1,115,115,115,115,115,115,115,115,115,115,115,115,115,115,115,115,115,115,115},
					    {16,116,116, -1,116,116,116,116,116,116,116,116,116,116,116,116,116,116,116,116,116,116,116},
					    {17,117,117, -1,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117},
					    {18,118,118, -1,118,118,118,118,118,118,118,118,118,118,118,118,118,118,118,118,118,118,118},
					    {19,119,119, -1,119,119,119,119,119,119,119,119,119,119,119,119,119,119,119,119,119,119,119},
					    {20,120,120, -1,120,120,120,120,120,120,120,120,120,120,120,120,120,120,120,120,120,120,120},
					    {21,121,121, -1,121,121,121,121,121,121,121,121,121,121,121,121,121,121,121,121,121,121,121}};
};

#endif
