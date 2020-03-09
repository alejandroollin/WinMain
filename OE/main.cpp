#include <windows.h>
int WINAPI  WinMain(HINSTANCE hInstanciaAct, HINSTANCE hInstanciaPrev, LPSTR lpCdmLine, int iCdmShow){
	WNDCLASSEX clase;//estructura de elementos que caracterisan a una ventana...clase: de ventana 
	HWND ventana;//manejador de ventana
	MSG mensaje;//estructura MSG mensage estructura 
	//es programa funciona por eventos o mensages 
	//se registra la clase, rellenando todos los datos de la estructura de la clase ventana:
	clase.cbSize = sizeof (WNDCLASSEX);
	clase.cbWndExtra = 0;
	clase.cbClsExtra = 0;
	clase.style = CS_HREDRAW | CS_VREDRAW;
	clase.lpfnWndProc = ProcedimientoVentanaPrincipal;
	clase.hInstance = hInstanciaAct;
	clase.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	clase.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	clase.hCursor = LoadCursor (NULL, IDC_ARROW);
	clase.lpszClassName = "MICLASE";
	clase.hbrBackground = GetSysColorBrush(COLOR_WINDOW);

	if(){
		
	}

	return 0;
}