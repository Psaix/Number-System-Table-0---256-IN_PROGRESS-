#include <iostream>

using namespace std;


int main()
{
	cout << " _______________________________________________________________________________________" << endl;
	cout << "|" << "\t" << "DEC" << "\t" << "|" << "\t" << "BIN" << "\t\t" << "|" << "\t\t" << "OCT" << "\t\t" << "|" << "\t" << "HEX" << "\t" << "|" << endl;
	cout << " _______________________________________________________________________________________" << endl;
	cout << "|" << "\t" << 0 << "\t" << "|" << "\t" << 0 << "\t\t" << "|" << "\t\t" << 0 << "\t\t" << "|" << "\t" << 0 << "\t" << "|" << endl;
	cout << " _______________________________________________________________________________________" << endl;
	for (size_t i = 1; i <= 256; i++)
	{
		size_t bin;
		size_t oct;
		size_t hex;
		size_t dec = i;
		size_t dec2 = dec;
		size_t dec3 = dec;

		if (i <= 127)
		{
			cout << "|" << "\t";
			cout << i;
			cout << "\t" << "|" << "\t";
			for (size_t i = 1; i <= dec; i *= 2)
			{
				bin = i;
			}
			for (size_t j = bin; j > 0; j /= 2)
			{
				cout << dec / j;
				dec %= j;
				if (dec < 0)
					break;
			}
			cout << "\t\t" << "|" << "\t\t";

			for (size_t i = 1; i <= dec2; i *= 8)
			{
				oct = i;
			}
			for (size_t j = oct; j > 0; j /= 8)
			{
				cout << dec2 / j;
				dec2 %= j;
				if (dec2 < 0)
					break;
			}
			cout << "\t\t" << "|" << "\t";

			for (size_t i = 1; i <= dec3; i *= 16)
			{
				hex = i;
			}
			for (size_t j = hex; j > 0; j /= 16)
			{
				cout << dec3 / j;
				dec3 %= j;
				if (dec3 < 0)
					break;
			}

			cout << "\t" << "|";
			cout << endl;
		}
		if (i > 127)
		{
			cout << "|" << "\t";
			cout << i;
			cout << "\t" << "|" << "\t";
			for (size_t i = 1; i <= dec; i *= 2)
			{
				bin = i;
			}
			for (size_t j = bin; j > 0; j /= 2)
			{
				cout << dec / j;
				dec %= j;
				if (dec < 0)
					break;
			}
			cout << "\t" << "|" << "\t\t";

			for (size_t i = 1; i <= dec2; i *= 8)
			{
				oct = i;
			}
			for (size_t j = oct; j > 0; j /= 8)
			{
				cout << dec2 / j;
				dec2 %= j;
				if (dec2 < 0)
					break;
			}
			cout << "\t\t" << "|" << "\t";

			for (size_t i = 1; i <= dec3; i *= 16)
			{
				hex = i;
			}
			for (size_t j = hex; j > 0; j /= 16)
			{
				cout << dec3 / j;
				dec3 %= j;
				if (dec3 < 0)
					break;
			}

			cout << "\t" << "|";
			cout << endl;
		}
		cout << " _______________________________________________________________________________________" << endl;
	}


	return 0;

}