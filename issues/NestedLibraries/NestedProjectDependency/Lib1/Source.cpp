__declspec(dllexport) bool __cdecl IsOdd(int x)
{
	bool isEven = (x % 2) == 0;
	return !isEven;
}
